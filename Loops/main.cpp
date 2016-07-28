#include<iostream>
using namespace std;

int main(){
    int N;
    int Ans;
    string x = " x ";
    string e = " = ";
    cin >> N;
    for(int i=0; i<10; i++){
        Ans = N * (i+1);
        cout << N << x << i + 1 << e << Ans << endl;
    }
    return 0;
}
