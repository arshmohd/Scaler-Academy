A - B
Problem Description
Given an array A of integers of size N. Find the size of the largest subset of the array in which every pair satisfy the condition: x2 + y2 + x*y ≡ B mod C, where x and y are two different elements of the subset and C is a prime number. Note: All elements in the array are different.     


Problem Constraints
1 <= N <= 100000
1 <= A[i], B, C <= 109 + 7
1 <= A[i], B <= C - 1


Input Format
First argument is an array A of integers of size N.
Second argument is an integer B.
Third argument is an integer C.


Output Format
Return an integer denoting the size of the largest subset satisfying the given condition.


Example Input
A = [9, 17, 10, 16]
B = 1
C = 19


Example Output
1


Example Explanation
No pair exist in the array which satisfy the condition so, we can only take one element in the subset.
