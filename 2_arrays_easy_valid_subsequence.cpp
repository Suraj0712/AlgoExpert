/* Question
Given two non-empty arrays of Integers, wrIte a function that determines whether the second array Is a subsequence of the first one. A subsequence of an array Is a set of numbers that aren't necessarily adjacent In the array but that are In the same order as they appear In the array. For instance, the numbers [1, 3, 4] form a subsequence of the array [1, 2, 3, 4] and so do the numbers [2, 4]. Note that a single number In an array and the array Itself are exare both valid subsequences of the array.
*/

// Test case {"array": [5, 1, 22, 25, 6, -1, 8, 10], "sequence": [1, 6, -1, 10]}

// Approach 1 => Time = O(n) | Space = O(1)
// Keep variable index which points to the element in the sequence. iterate through array and if element match with the element in the sequence then update the variable. finally based on the variables value return the result

using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) 
{
  int index =0;
	
	for(auto i: array)
	{
		if(i == sequence[index])
		{
			index++;
			cout<<index<<" ";
		}
	}
	
	if(index == sequence.size())
	{
		return true;
	}
  return false;
}


