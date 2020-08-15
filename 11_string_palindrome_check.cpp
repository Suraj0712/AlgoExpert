/*Question
Write a function that takes in a non-empty string and thatreturns a boolean representing whether the string is a palindrome.  A palindrome is defined as a string that's written the same forward and backward. note that single-character string are pamindromes.
*/

// {"string": "abcdcba"}

// Approach 1 => Time = O(n) | Space = O(1)
// handle the edge cases bychecking the length of string. based on the string length iterate and and compair the mirroring character.

using namespace std;

bool isPalindrome(string str) 
{
	if(str.size()<2)
	{
		return true;
	}
	
	int st = str.size()/2 - 1;
	
	if(str.size()%2 == 0)
	{
		int count =1;
		for(int i=st; i>=0; i--)
		{
			if(str[i] != str[st+count]){return false;}
			count++;
		}
	}
	else
	{
		int count =2;
		for(int i=st; i>=0; i--)
		{
			if(str[i] != str[st+count]){return false;}
			count++;
		}
	}
  return true;
}
