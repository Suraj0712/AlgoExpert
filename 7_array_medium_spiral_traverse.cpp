/*Question

Write a function that takes In an n x m two-dimensional array (that can be sguare-shaped when n = m) and returns a one, dimensional array of all the array's elements in spiral order. 

Spiral order starts at the top left comer of the two-dimensional array, goes to the right, a. proceeds In a spiral pattern all the way until every element has been vislt.. 
*/

// Test case {"array": [[1, 2, 3, 4], [12, 13, 14, 5], [11, 16, 15, 6], [10, 9, 8, 7]]}

// Approach 1 => Time = O(n) | Space = O(n)
// write a function which which returns the perimeter of array (Four for loops for 4 directions). and when the remaining element are in linear shape just traverse them

 
using namespace std;

vector<int> spiralTraverse(vector<vector<int>> array) 
{
  // Write your code here.
	if(array.size() == 0)
	{
		return {};
	}
	
	vector<int> result = {};
	int start_row = 0;
	int end_row = array.size() - 1;
	int start_col = 0;
	int end_col = array[0].size() - 1;
	
	while(start_row <= end_row and start_col <= end_col)
	{
		for(int col = start_col; col<=end_col ; col++)
		{
			result.push_back(array[start_row][col]);
		}
		
		for(int row = start_row + 1; row<=end_row; row++)
		{
			result.push_back(array[row][end_col]);
		}
		
		for(int col = end_col - 1; col >= start_col; col--)
		{
			if(start_row == end_row)
			{
				break;
			}
			result.push_back(array[end_row][col]);
		}
		
		for(int row = end_row - 1; row > start_row; row--)
		{
			if(start_col == end_col)
			{
				break;
			}
			result.push_back(array[row][start_col]);
		}
		
		start_row++;
		end_row--;
		start_col++;
		end_col--;
	}
	return result;
}

