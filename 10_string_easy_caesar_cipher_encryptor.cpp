/*Question
Given a non-empty string of lowercase letters and a non-negative integer representing a key , write a function that returns a new string obtained by shifting every letter in the input string by k positions in the alphabet where k is the key.
*/

// {"string": "xyz", "key": 2}

// Approach 1 => Time = O(n) | Space = O(n)
// create a circular array of size 26 and to get the element after the nth place [(current pose + key) % 26]

using namespace std;

string caesarCypherEncryptor(string str, int key) 
{
	for(int i=0; i<str.size(); i++)
	{
		str[i] = (char) ((str[i]-97+key)%26)+97;
	}
  return str;
}

