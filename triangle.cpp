#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"enter sides of the triangle"<<endl;
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<"equilateral triangle";
    }
    if(a!=b && b!=c){
        cout<<"can form a scalene triangle.";
    }
    if(a==b && b!=c){
        cout<<"isoscelles triangle";
    }
    
    return 0;
}
