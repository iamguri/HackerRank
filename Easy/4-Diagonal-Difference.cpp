https://www.hackerrank.com/challenges/diagonal-difference/problem

Problem:
Given a square matrix, calculate the absolute difference between the sums of its diagonals.

For example, the square matrix  is shown below:

1 2 3
4 5 6
9 8 9  
The left-to-right diagonal = 1+5+9=15. 
The right to left diagonal = 3+5+9=17. Their absolute difference is |15-17|=2.

Sample Input

3
11 2 4
4 5 6
10 8 -12
Sample Output

15

Solution:
#include <bits/stdc++.h>

using namespace std;

 int main(){

   int i,j,d1=0,d2=0,n,a[100][100],sum=0;

      cin>>n;

     for(i=0;i<n;i++){
         for(j=0;j<n;j++){
             cin>>a[i][j];
         }
      }
   
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
            if(i==j){
            d1 += a[i][j];
            }
           if(i==n-j-1){
                 d2 += a[i][j];
           }
       }
   }
   sum=abs(d1-d2);
   cout<<sum;
   return 0;
}

