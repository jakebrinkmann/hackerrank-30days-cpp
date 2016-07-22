#include<iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    string o = "Weird";
    string e = "Not Weird";

    if(N%2 > 0) {
        cout<<o;
    } else {
        if(N<21) {
            if(N>5) {
                cout<<o;
            } else {
                cout<<e;
        }} else {
            cout<<e;
        }
    }
    cout<<endl;
    return(0);
}
