#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows,i.e n: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j;
        }
        cout<<endl;
    }



}