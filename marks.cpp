#include<iostream>
using namespace std;
int main(){
    int A, B, C;
    cout<<"enter the marks obtained by A,B,C: "<<endl;
    cin>>A>>B>>C;
    if(A>B && A>C){
        cout<<"C got smallest marks . "<<C;
    }
    if(C>A && B>A ){ 
            cout<<"A got the smallest."<<A;
        }

    else{
        cout<<"B got the smallest. " <<B;
    }


    return 0;
}