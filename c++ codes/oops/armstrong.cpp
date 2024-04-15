#include<iostream>
using namespace std;
class armstrong{
    int i,sum=0,num,rem,temp;
    public:
    void input(){
        cout<<"entre the number >>"<<endl;
        cin>>num;
    }
    void code();
    void output();

};
void armstrong::code(){
    while(num!=0){
        
        rem=temp%10;
       sum=sum +rem*rem*rem;
       temp=temp/10;
    }
   
}
void armstrong ::output(){
    if(sum==num){
        cout<<"entred number is amstrong number";

    }
    else{
        cout<<"entred number is not armstrong number";
    }
}

int main(){
armstrong a;
a.input();
a.code();
a.output();
return 0;
}