#include<iostream>
#include<bitset>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    int maxBits = 32;
    bitset<32> binary (n);

    int maxStreak = 0;
    int thisStreak = 0;
    bool streaking = false;
    for(int i=0; i<maxBits; i++){
        if (binary[i]) {
            if (streaking) {
                thisStreak++;
            } else {
                thisStreak = 1;
                streaking = true;
            }
        } else {
            streaking = false;
            thisStreak = 0;
        }
        if (thisStreak > maxStreak){
            maxStreak = thisStreak;
        }
    }
    cout << maxStreak << endl;
    return 0;
}
