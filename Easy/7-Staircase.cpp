https://www.hackerrank.com/challenges/staircase/problem
Problem:
Consider a staircase of size :

   #
  ##
 ###
####
Observe that its base and height are both equal to n, and the image is drawn using # symbols and spaces. 
The last line is not preceded by any spaces.

Write a program that prints a staircase of size n.

Sample Input

6 
Sample Output

     #
    ##
   ###
  ####
 #####
######


Solution:
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a[n],i,stair,j,k;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
    for(int k=0;k<(n-i)-1;k++){
        cout<<" ";
    }
    for(int j=i+1;j>0;j--){
    cout<<"#";
    }
    cout<<endl;
    }
    return 0;
}
