#include<iostream>
using namespace std;
int main(){
   int x1,y1,x2,y2,x3,y3,slope1,slope2;
   cout<<"enter the points: "<<endl;
   cin>>x1>>y1>>x2>>y2>>x3>>y3;
   slope1=(y2-y1)/(x2-x1);
   slope2=(y3-y1)/(x3-x1);
   if(slope1==slope2){
    cout<<"all three points lies on the same line."<<slope1<<" and "<<slope2;
   }
   else{
    cout<<"not lies on the same line.";
   }
   return 0; 
}