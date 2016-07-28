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
            int k = 0;
            while((k*2)+j<N){
                cout << S[(k*2)+j];
                k++;
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
    
