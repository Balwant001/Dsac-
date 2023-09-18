#include<iostream>
using namespace std;
int main(){
    int r;
    float pi=3.14 ;
    float area,peri;
    cout<<"enter the radius r: "<<endl;
    cin>>r;
    area = 3.14*r*r;
    peri = 2*3.14*r;
    cout<<"area ="<<area<<" ,"<<"perimeter = "<<peri<<endl;
    if(area>peri){
        cout<<"area is greater than perimeter";
    }
    else{
        cout<<"perimeter is greater than area";
    }
    return 0;
}