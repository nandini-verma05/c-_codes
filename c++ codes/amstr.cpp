#include<iostream>
#include<cmath>
using namespace std;
int countdigits(int num){
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;

}

int isamstrong(int num){
 int originalNum = num;
    int sum = 0;
    int n = countdigits(num);

    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }

    return sum == originalNum;
}

void print(int s,int e){
for (int num = s; num <= e; ++num) {
        if (isamstrong(num)) {
          cout << num << " ";
}
}
}
int main(){
    print(1,500);
   

}