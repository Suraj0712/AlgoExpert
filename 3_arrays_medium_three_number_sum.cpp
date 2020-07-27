/* Question
Write a function that takes In a nan empty array of distinct Integers and an Integer representing a target sum.
The function should find all triplets In the array that sum up to the target sum 
and return a two-dimensional array of all these triplets. 
The numbers In each triplet should be ordered In ascending order, 
and the triplets themselves should be ordered In ascending order with respect to the numbers they hold. 
If no three numbers sum up to the target sum, the function should return an empty array. */

// Test case {"array": [12, 3, 1, 2, -6, 5, -8, 6], "target": 0} / {"array": [8, 10, -2, 49, 14], "targetSum": 57}

// Brute force: Iterate through the 3 numbers O(n^3)
// Approach 2 : O(n^2), O(n)fix one element and call two sum function (extra space required to store has map) and sorting also required
// Approach 3 => Iterate throught the array and use two pointer (from current array index to end) technic to find the triplets
// Time = O(n^2) | Space = O(n)-> for triplet and nothing for program

#include <vector>
using namespace std;

vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) 
{
	vector<vector<int>> ret_vector;
	
	sort(array.begin(), array.end());
	
	int left = 1, right = array.size() - 1, remainder;
	
	for(int i = 0; i<array.size(); i++)
	{
		left = i + 1, right = array.size() - 1;
		
		while(left < right)
		{
			if(array[left] + array[right] + array[i] < targetSum)
			{
				left++;
			}
			else if(array[left] + array[right] + array[i] > targetSum)
			{
				right--;
			}
			else
			{
				ret_vector.push_back({array[i], array[left], array[right]});
				left++; right--;
			}
		}
	}
  return ret_vector;
}


