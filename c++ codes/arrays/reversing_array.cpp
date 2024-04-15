#include<iostream>
using namespace std;

int main(){
int array[100];
int num,rem,sum,i;
cout<<"entre the number>>";
cin>>num;
array[i]=num;
while(array[i]!=0){
    rem=array[i]%10;
    sum=(sum*10)+rem;
    array[i]=array[i]/10;
}
cout<<"reverse number is"<<sum;


return 0;
}