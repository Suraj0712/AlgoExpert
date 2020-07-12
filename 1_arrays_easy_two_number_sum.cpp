/*Question

Write a function that takes in a non-empty array of dIstInct Integers and an Integer representing a target sum. If any two numbers In the Input array sum up to the target sum, the function should return them In an array, In any order. If no two numbers sum up to the target sum, the function should return an empty array. 

Note that the target sum has to be obtained by summing two different Integers In the array; you can't add a single Integer to Itself To obtain the target sum. 

You can assume that there wIll be at most one pair of numbers summing up to the target sum. 
*/

// Test case {"array": [3, 5, -4, 8, 11, 1, -1, 6], "targetSum": 10}

// Approach 1 => Time = O(n^2) | Space = O(1)
// Find all the possible pairs and check there sum

#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) 
{
  for(auto i: array)
	{
		for(auto j: array)
		{
			if(i+j == targetSum and i!=j)
			{
				return {i,j};
			}
		}
	}
  return {};
}

// Approach 2 => Time = O(nlog(n)) | Space = O(1)
// Sort the array and then use two pointers to find the sum

#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  
	sort(array.begin(),array.end());
	
	int lower = 0, higher = array.size()-1;
	
	while(lower<higher)
	{
		if(array[lower] + array[higher] == targetSum)
		{
			return {array[lower] , array[higher]};
		}
		else if(array[lower] + array[higher] < targetSum)
		{
			lower++;
		}
		else
		{
			higher--;
		}
	}
  return {};
}

// Approach 3 => Time = O(n) | Space = O(n)
// Create a unordered set of number and before inserting the number to array check whether sum-num already present in the set

#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) 
{
	unordered_set<int> s;
	auto it = s.begin();
	
	for(auto i: array)
	{
		it = s.find(targetSum - i);
		if(it == s.end())
		{
			s.insert(i);
		}
		else
		{
			return {i, targetSum - i};
		}
	}
	return {};
}