#include<iostream>
using namespace std;

int main(){
int a=8;
int*b=&a;//pointer
int **c=&b;//pointer to pointer variable
cout<<"the value of a>>"<<a<<endl;
cout<<"the adress of a>>"<<b<<endl;//it will show the addres of a
cout<<"the value at address b>>"<<*b<<endl;//the value at adress b
cout<<"the value of b>>"<<&a<<endl;//the value at adress a
cout<<"the address of b>>"<<c<<endl;//it will show the address of b
cout<<"the value of c>>"<<**c<<endl;//the value at adress b  
cout<<"the value of c>>"<<&b<<endl;//the  adress b



return 0;
}