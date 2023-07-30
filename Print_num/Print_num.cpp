#include <bits/stdc++.h>
using namespace std;
void n_2_one(int num);
void one_2_n(int num);

int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;
    n_2_one(num);
    one_2_n(num);
    cout << "\n";
}

void n_2_one(int num){
    if (num <= 1) {
        cout << 1 << endl;
    } else {
        cout << num << " ";
        n_2_one(num - 1);
    }
}

void one_2_n(int num){
    if(num >= 1){
        one_2_n(num - 1);
        cout << num <<" ";
    }
}