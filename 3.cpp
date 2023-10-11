#include<iostream>
using namespace std;
int printodds(int a,int b){
    if(a>b) swap(a,b);
    for(int i=a;i<=b;i++){
        if(i%2!=0){
        cout<<i;}
        cout<<endl;
    }
}
int main(){
    int a,b;
    cout<<"Enter a and b: "<<endl;
    cin>>a>>b;
    cout<<printodds(a,b);
    return 0;
}