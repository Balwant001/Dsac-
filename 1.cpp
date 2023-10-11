#include<iostream>
using namespace std;
int square(int x){
    int sq = x*x;
   return sq;
}
int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<square(i);
        cout<<endl;
    }
    

    return 0;
}