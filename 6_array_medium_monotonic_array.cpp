/*Question

Write a function that takes In an array of Integers and returns a boolean representing whether the array Is monotonle.
An array is said to he monotonic If Its elements, from lett to right are entlrely non-Increasing or entlrely non-decreasing.  
*/

// Test case {[-1, -5, -10, -1100, -1100, -1101, -1102, -9001]}

// Approach 1 => Time = O(n) | Space = O(1)
// Determine whether array is decreasing or increasing based on first and last element
// Iterate over the array and check whether consecutive element forloowing the same trend

using namespace std;

bool isMonotonic(vector<int> array) 
{
	if(array.size() <= 2)
	{
		return true;
	}
	
	bool inc = true;
	
	if(array[0] < array[array.size()-1])
	{
		inc = true;
	}
	else
	{
		inc = false;
	}
	
  for(int i=0; i<array.size()-1; i++)
	{
		if(inc)
		{
			if(array[i] > array[i+1])
			{
				return false;
			}
		}
		else
		{
			if(array[i] < array[i+1])
			{
				return false;
			}			
		}
	}
  return true;
}

