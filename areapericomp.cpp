#include<iostream>
using namespace std;
int main(){
    int length, breadth, area, perimeter;
    cout<<"enter length and breadth: "<<endl;
    cin>>length>>breadth;
    area= length*breadth;
    perimeter = 2*(length + breadth);
    if(area>perimeter){
        cout<<"area is greater than perimeter. "<<area<<" and "<<perimeter;
    }
    else{
        cout<<"perimeter is greater than area. "<<perimeter<<" and "<<area;
    }
    return 0;
}