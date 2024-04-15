#include<iostream>
using namespace std;


class dec_to_bin{
    public:
    int bin=0,dec,rem,i=0;
    void get(void);
    void con(void);
};
void dec_to_bin :: get(){
    cout<<"entre a number for binary conversion>>";
    cin>>dec;
}
void dec_to_bin :: con(){
    while(dec !=0){
         rem=dec%i;
         bin=bin+(rem*i);
         dec = dec/2;
         i=i*10;
    }
    cout<<"the binary conversion for the number id>>"<<bin;
}
int main(){
    dec_to_bin d;
    d.get();
    d.con();

return 0;
}