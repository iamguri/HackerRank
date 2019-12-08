https://www.hackerrank.com/challenges/a-very-big-sum/problem

Problem:
Calculate and print the sum of the elements in an array, 
keeping in mind that some of those integers may be quite large.

Sample Input

5
1000000001 1000000002 1000000003 1000000004 1000000005

Output

5000000015
Note: Use long to get the desired range input.


Solution:
#include <bits/stdc++.h>

using namespace std;

 int main(){
     
          
long long int a[10],sum=0,i,n;
 cin>>n;
     for(i=0;i<n;i++){
         cin>>a[i];
         sum += a[i];
     }
    cout<<sum;
 return 0;
 }
