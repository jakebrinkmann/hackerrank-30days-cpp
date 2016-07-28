#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;

    string S;
    int N;
    for(int i=0; i<T; i++){
        cin >> S;
        N = S.length();
        for(int j=0; j<2; j++){
            for(int k=0; k<N/2; k++){
                cout << S[(k*2)+j];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
    
