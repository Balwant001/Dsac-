#include<iostream>
using namespace std;
int count = 0;
int countdigitsquare(int n){
    while(n>0){
    n/=10;
    count++;}
    return count*count;

}
int main(){
    int n;
    cout<<"Enter n : "<<endl;
    cin>>n;
    cout<<countdigitsquare(n);
    return 0;
}