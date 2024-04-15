#include<iostream>
using namespace std;
class fib{
    int i,num,rem=1,sum=0,temp=0;
    public:
     void sequenc();
     void input(){
        cout<<"entre the term::"<<endl;
        cin>>num;
     }
};
void fib::sequenc(){
    for(i=3;i<=num;i++){
        temp = rem+sum;
        cout<< "\n" <<temp; 
        rem=sum;
        sum=temp;
    }
    

}

int main(){
    fib f;
    
    f.input();
    f.sequenc();

return 0;
}