#include<iostream>
using namespace std;

int main(){
int array[1000];
int i,rem,sum=0,num;
cout<<"entre the number>>";
 cin>>num;
    for(i=0;i<=num;i++){
        array[i]=num%10;
        num=num/10; // this loop for seperating the number
}
for(int j=0;j<i;j++){
    
    sum=(sum*10)+array[j];//reversing
}
if(sum==num){
    cout<<"it is a palindrome";
}
else{
    cout<<"it is not a palindrome";
}
return 0;
}