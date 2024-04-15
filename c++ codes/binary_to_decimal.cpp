#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int bin,dec=0,i=1,rem;
    cout<<"entre the binary number";
    cin>>bin;
    while(bin!=0){
        rem = bin % 10;
        bin /= 10;
        dec += rem * i;
         i*=2;

    }
    cout<<"the decimal number is>>"<<dec;
}