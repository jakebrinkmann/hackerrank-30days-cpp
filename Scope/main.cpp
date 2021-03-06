#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    Difference(vector<int> a)
        {this->elements = a;};
    void computeDifference(void) {
        int N=this->elements.size();
        int maximumDifference = 0;
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                int tmpdiff = elements[i] - elements[j];
                if(tmpdiff>maximumDifference)
                    { maximumDifference=tmpdiff; };
            }
        }
        this->maximumDifference = maximumDifference;
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
