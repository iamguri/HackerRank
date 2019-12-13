#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,grade=0,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>grade;
        if(grade>=38 && grade%5>=3){
            grade = grade+(5-grade%5);
        }
      
    cout<<grade<<endl;
    }
    return 0;
}
