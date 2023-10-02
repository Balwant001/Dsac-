#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of rows, i.e n: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
        for(int j=1;j<=i;j++){
            cout<<j;
            }
            cout<<endl;
        }
        else{
            for(int j=1;j<=i;j++){
            cout<<(char)(64+j);}
            cout<<endl;
        }
        
    }
    return 0;
}