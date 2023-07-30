#include <bits/stdc++.h>
using namespace std;
int summofTwoNumbers(int number1, int number2);


int main(){
    int num1, num2;
    cout << "Enter the number 1:" << endl;
    cin >> num1;
    cout << "Enter the number 2:" <<endl;
    cin >> num2;
    cout << "The result is: " << summofTwoNumbers(num1,num2) << endl;
    return 0; 
}

int summofTwoNumbers(int number1, int number2){
    return number1+number2;
}

int subtractionOfTwoNumbers(int number1, int number2){
    return number1-number2;
}
