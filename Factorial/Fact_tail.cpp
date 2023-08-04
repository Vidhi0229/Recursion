#include <bits/stdc++.h>
using namespace std;
int Fact_tail(int n, int a);
int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << Fact_tail(num, 1) <<"\n";
}

int Fact_tail(int n, int a){
    if(n <= 1){
        return a;
    }
    else{
        return Fact_tail(n-1, a * n);
    }
}