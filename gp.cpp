#include<iostream>
using namespace std;
int main(){
    int n,i;
    int a=3;
    cout<<"enter the value of n: "<<endl;
    cin>>n;
    for(i=0;i<=n;i++){
        cout<<a<<endl;
        a=a*4;
    }
    return 0;
}