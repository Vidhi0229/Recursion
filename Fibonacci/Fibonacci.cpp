#include <bits/stdc++.h>
using namespace std;
int Fibonacci(int num);

int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << Fibonacci(num) <<"\n";
}

int Fibonacci(int num){
    if(num <= 0){
        return 0;
    }
    else if(num == 1){
        return 0;
    }
    else if(num == 2){
        return 1;
    }
    else{
        return Fibonacci(num - 1) + Fibonacci(num - 2);
    }
}