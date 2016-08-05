#include <map>
#include <string>
#include <iostream>

using namespace std;


int main(){
    string S;
    cin >> S;
    int i;
    try {
        i = stoi(S);
        cout << i << endl;
    } catch (const invalid_argument& ia) {
        cout << "Bad String" << endl;
    }
    return 0;
}

