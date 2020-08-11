/*Question
Write a function that takes In an array of Integers and returns the length of the longest peak in the array. peak Is defined as adjacent Integers In the array that are strictly Increasing until they reach a top (the highest value In the peak), at which point they become strictly decreasing. At least three Integers are required to form a peak. For example, the Integers 1, 4, 10, 2 forms a peak, but the Integers 4,0,10 don't, and neither do the Integers 1,2,2,0 simIlarly, the Integers 1, 2, 3 don't form a peak because there aren't any strictly decreasing Integers atter the 3. 
*/

// Test case {{"array": [1, 2, 3, 3, 4, 0, 10, 6, 5, -1, -3, 2, 3]}

// Approach 1 => Time = O(n) | Space = O(1)
// traverse the array and whenever you encounter the peak check for the both sides for its span.

using namespace std;

int findLeftLen(vector<int> array, int i)
{
	int left =0;
	while(i>=1 and array[i]>array[i-1])
	{
		left++;
		i--;
	}
	return left;
}

int findRightLen(vector<int> array, int i)
{
	int right =0;
	while(i<array.size()-1 and array[i]>array[i+1])
	{
		right++;
		i++;
	}
	return right;	
}

int longestPeak(vector<int> array) 
{
	if(array.size()<2)
	{
		return 0;
	}
	
	int cur =0;
	int peak_length = 0;
	for(int i=1; i<array.size()-1; i++)
	{
		cout<<i<<"\n";
		if(array[i-1]<array[i] and array[i]>array[i+1])
		{
			cur = findRightLen(array, i) + findLeftLen(array, i)+1;
			if(cur>peak_length)
			{
				peak_length = cur;
			}
			 
			cout<<"Peak: "<<array[i]<<"left: "<<findLeftLen(array, i)<<"right: "<<findRightLen(array, i)<<"  current:"<<cur<<"\n";
			i = i + findRightLen(array, i);
		}
	}
	
	return peak_length;
}
