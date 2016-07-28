#include<iostream>
#include<map>
using namespace std;

int main(){
    int N;
    string name;
    int number;
    string search;
    cin >> N;
    map<string,int> phoneBook;
    for(int i=0; i<N; i++){
        cin >> name;
        cin >> number;
        phoneBook[name] = number;
    }
    while (cin >> search) {
        if(phoneBook.find(search) != phoneBook.end()){
            cout << search << "=" << phoneBook[search] <<endl;
        } else {
            cout << "Not found" <<endl;
        }
    }
    return 0;
}
