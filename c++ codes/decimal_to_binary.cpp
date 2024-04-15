#include<iostream>
using namespace std;
int main(){
int bin=0,dec,rem,i=1;
cout<<"entre the decimal number>>";
cin>>dec;
while(dec!=0){
    rem=dec%i;
    bin=bin+(rem*i);
    dec = dec/2;
    i=i*10;

}
cout<<"binary ="<<bin;
}
