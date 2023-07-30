#include <bits/stdc++.h>
using namespace std;
int factorial(int n);
int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << factorial(num) <<"\n";
}

int factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n * factorial(n-1);
}