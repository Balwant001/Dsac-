#include<iostream>
using namespace std;
int main(){
   int x,y;
   cout<<"enter the value of x and y:"<<endl;
   cin>>x>>y;
   if(x>y){
    cout<<x <<" is greater than " <<y;
   }
   else{
    cout<<y <<" is greater than "<<x;
   }
    return 0;
}