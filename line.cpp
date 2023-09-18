#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter x and y: "<<endl;
    cin>>x>>y;
    if(x==0 && y==0){
        cout<<"x and y lies on origin.";
    }
    if(x==0 && y!=0){
        cout<<"x and y lies on Y-axis";
    }
    if(x!=0 && y==0){
        cout<<"x and y lies on the X-axis";
    }
    if(x!=0 && y!=0){
        cout<<"x and y lies on the plane";
    }
    
    
    
    return 0;
}