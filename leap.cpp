#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter year in format YYYY: "<<endl;
    cin>>year;
    if(year %4 == 0){
        cout<<"this is a leap year."<<year;
    }
    else{
        cout<<"this is not a leap year."<<year;
    }
    return 0;
}