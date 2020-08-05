/*Question

Write a function that takes in a non-empty array of dIstInct Integers and an Integer representing a target sum.
If any two numbers In the Input array sum up to the target sum, the function should return them In an array, 
In any order. If no two numbers sum up to the target sum, the function should return an empty array. 

Note that the target sum has to be obtained by summing two different Integers In the array;
 you can't add a single Integer to Itself To obtain the target sum. 

You can assume that there wIll be at most one pair of numbers summing up to the target sum. 
*/

// Test case {"array": [3, 5, -4, 8, 11, 1, -1, 6], "targetSum": 10}

// Approach 1 => Time = O(n^2) | Space = O(1)
// Find all the possible pairs and check there sum

