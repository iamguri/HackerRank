https://www.hackerrank.com/challenges/simple-array-sum/problem
Problem:
Given an array of integers, find the sum of its elements.

For example, if the array ar=[1,2,3], 1+2+3=6, so return 6.

Sample Input

6
1 2 3 4 10 11
Sample Output

31

Solution:
#include <iostream>
using namespace std;

int main() {
  int n, a[1000], sum = 0,i;
  cin >> n;
  
  for(i=0;i<n;i++){
    cin >> a[i];
    sum  += a[i];
  }
 cout<<sum;
  return 0;
}
