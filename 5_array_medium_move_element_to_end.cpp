/* Question
You're glven an array of Integers and an Integer. 
\Write a function that moves all Instances of that Integer In the array to the end of the array and returns the array. 
The function should perform ells In place (I.e., a should mutate the Input array) and doesn't need to maintain the order of the other Integers. */

// Test case {"array": [2, 1, 2, 2, 2, 3, 4, 2], "toMove": 2}

// Solution 1 t=>O(n), s=>O(1)

#include <vector>

using namespace std;

vector<int> moveElementToEnd(vector<int> array, int toMove) 
{
// 	Count the occurances of the number
	int count = 0;
	for(auto i: array)
	{
		if(i == toMove)
		{
			count++;
		}
	}
	
// 	move all the element which are not equal to given element forward
	int slow = 0, fast = 0;
	for(int i=0 ; i<array.size() ; i++)
	{
		if(array[i] != toMove)
		{
			array[slow] = array[fast];
			slow++;			
		}
		fast++;
	}
		
// 	replace the remaining element with given
	for(int i=array.size() - count ; i<array.size() ; i++)
	{
		array[i] = toMove;
	}

  return array;
}

//Solution 2 t=>O(n), s=>O(1) (only one pass)
#include <vector>

using namespace std;

vector<int> moveElementToEnd(vector<int> array, int toMove) {
  // Write your code here.
	int left = 0, right = array.size()-1,temp;
	
	while(left < right)
	{

		if(array[left] == toMove and array[right] !=toMove)
		{
			temp = array[left];
			array[left] = array[right];
			array[right] = temp;
			left++;
			right--;
		}
		
		
		if(array[left] != toMove)
		{
			left++;
		}
		
		if(array[right] == toMove)
		{
			right--;
		}
	}
	
  return array;
}



