https://www.hackerrank.com/challenges/compare-the-triplets/problem

Problem:
Alice and Bob each created one problem for HackerRank. A reviewer rates the two challenges, awarding points on a scale 
from 1 to 100 for three categories: problem clarity, originality, and difficulty.
alice= (a[0],a[1],a[2])
bob= b[0],b[1],b[2])
compare a[0] with b[0] and so on...

Sample Input 0

5 6 7
3 6 10
Sample Output 0

1 1
   
Solution:
#include <bits/stdc++.h>

using namespace std;

int main() {
   
  int a[100],b[100],i,alicepoint=0,bobpoint=0;

for(i=0;i<3;i++){
    cin>>a[i];
}
for(i=0;i<3;i++){
    cin>>b[i];
}
for(i=0;i<3;i++){
    if(a[i]>b[i]){
        alicepoint++;
    }
    else if(a[i]<b[i]){
        bobpoint++;
    }
}
cout<<alicepoint<<" "<<bobpoint; 
return 0;
}
