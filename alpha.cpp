#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character:"<<endl;
    cin>>ch;
    int x=(int)ch;
    if((x>=65 && x<=90) || (x>=97 && x<=122)){
        cout<<" this character is an alphabet."<<ch <<" " <<x;
    }
    if(x>=0 && x<=48){
        cout<<"is an special character."<<ch<<" "<<x;
    }
    

}