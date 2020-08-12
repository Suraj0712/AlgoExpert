/*Question
Write the function that takes in an array and returns the maximum sum of non-adjacent elements in the array. if a sun cnat be generated the function should return 0.
*/

// Test case {"array": [10, 5, 20, 25, 15, 5, 5, 15, 3, 15, 5, 5, 15]}

// Approach 1 => Time = O(n) | Space = O(n) / O(1) Also possible
// Iterate throught the array and store the maximum sum till that index
// for eg. max_sum for index 1 = array[0], index 2 = max(array[0],array[1]), index 3 = max(array[3]+array[0], max_sum[2])

O(n) / O(n)
#include <vector>
using namespace std;

int maxSubsetSumNoAdjacent(vector<int> array) 
{
	if(array.size() == 0)
	{
		return 0;
	}
	if(array.size()<3)
	{
		return *max_element(array.begin(),array.end());
	}
	vector<int> max_sum;
	max_sum.resize(array.size());
	max_sum[0] = array[0];
	max_sum[1] = max(array[0],array[1]);
	
	for(int i=2; i<array.size(); i++)
	{
		max_sum[i] = max(max_sum[i-2] + array[i] , max_sum[i-1]);
	}
	
  return *max_element(max_sum.begin(),max_sum.end());
}

O(n) / O(1)
#include <vector>
using namespace std;

int maxSubsetSumNoAdjacent(vector<int> array) 
{
	if(array.size() == 0)
	{
		return 0;
	}
	if(array.size()<3)
	{
		return *max_element(array.begin(),array.end());
	}

	int prevprev, prev, curr, temp;
	prevprev = array[0];
	prev = max(array[0],array[1]);
	curr = array[2];
	
	for(int i=2; i<array.size(); i++)
	{
		curr = array[i];
		temp = max(prevprev + curr , prev);
		prevprev = prev;
		prev = temp;
	}

	return max(prevprev, prev);
}

