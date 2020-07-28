/* Question
Wrlte a function that takes In two norkempty arrays of Integers, 
finds the pair of numbers (one from each array/ whose absolute difference Is closest to zero,
 and returns an array containing these two numbers, with the number from Me first array in the 11 rst posItion. 
You can assume that there wIll only be one pair of numbers with the smallest Mfference.  */

// Test case {"arrayOne": [-1, 5, 10, 20, 3], "arrayTwo": [26, 134, 135, 15, 17]}

// Solution 1 t=>O((n+m)^2), s=>O(1)
#include <vector>
using namespace std;

vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) 
{
	int first_idx, second_idx, diff = INT_MAX;
	
	for(int i=0; i<arrayOne.size(); i++)
	{
		for(int j=0; j<arrayTwo.size(); j++)
		{
			if(diff > abs(arrayOne[i] - arrayTwo[j]))
			{
				diff = abs(arrayOne[i] - arrayTwo[j]);
				first_idx = i;
				second_idx = j;
			}
		}
	}
  // Write your code here.
  return {arrayOne[first_idx] ,arrayTwo[second_idx]};
}

//Solution 2 t=>O(nlog(n) + mlog(m)), s=>O(1)
#include <vector>
using namespace std;

vector<int> smallestDifference(vector<int> arrayOne, vector<int> arrayTwo) 
{
	
	sort(arrayOne.begin(), arrayOne.end());
	sort(arrayTwo.begin(), arrayTwo.end());
	
	vector<int> ret_vector, temp;
	
	int current = INT_MAX, best_diff = INT_MAX, first=0, second=0;
	int firstnum =arrayOne[first] , secondnum = arrayTwo[second];
	
	while(first < arrayOne.size() and second < arrayTwo.size())
	{
		firstnum = arrayOne[first];
		secondnum = arrayTwo[second];
		
		if(firstnum < secondnum)
		{
			current = arrayTwo[second] - arrayOne[first];
			first++;
		}
		else if(firstnum > secondnum)
		{
			current = arrayOne[first] - arrayTwo[second];
			second++;
		}
		else
		{
			return {firstnum , secondnum};
		}
		
		if(best_diff > current)
		{
			best_diff = current;
			ret_vector = {firstnum , secondnum};
		}
	}
  return ret_vector;
}

