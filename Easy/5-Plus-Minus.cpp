https://www.hackerrank.com/challenges/plus-minus/problem
Peoblem:
Given an array of integers, calculate the fractions of its elements that are positive, 
negative, and are zeros. Print the decimal value of each fraction on a new line.
arr = [-2,-1,0,1,2] here are 5 elements.
ration would be:
2/5=0.40000 (negative)
1/5=0.20000 (zero)
2/5=0.40000 (positive)

Solution:
#include <bits/stdc++.h>

using namespace std;

int main(){

    int a[1000],i,n;
   float  pos=0,neg=0,zer=0;
    cin>>n;

    for(i=0;i<n;i++)
        {
            cin>>a[i];
        if(a[i]>0)
            pos++;
        else if(a[i]<0)
            neg++;    
        else if (a[i]==0) 
            zer++;
    }
cout<<setprecision(6)<<pos/n<<endl<<setprecision(6)<<neg/n<<endl<<setprecision(6)<<zer/n;
    return 0;

}
