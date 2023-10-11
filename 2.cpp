#include<iostream>
using namespace std;
float  area(int x){
    float  ar = 2*3.14*x*x;
    return ar;
}
int main(){
    int radius;
    cout<<"Enter radius: "<<endl;
    cin>>radius;
    cout<<area(radius)<<" is the area of circle.";
    return 0;
}