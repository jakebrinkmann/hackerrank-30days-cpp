#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. 
     * Print output to STDOUT */
    double mealCost;
    int tipPercent;
    int taxPercent;
    string prefix = "The total meal cost is ";
    string suffix = " dollars.";

    double totalCost;

    cin>>mealCost>>tipPercent>>taxPercent;

    totalCost=mealCost+(mealCost*tipPercent/100)+(mealCost*taxPercent/100);
    cout<<prefix<<round(totalCost)<<suffix<<endl;

    return 0;
}
