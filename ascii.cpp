#include<iostream>
using namespace std;
int main(){
    int i=65;
    while(i<=90){
        char ch=(int)i;
        cout<<ch<<"-ascii="<<i<<endl;
        i+=1;
    }
    
    return 0;
}