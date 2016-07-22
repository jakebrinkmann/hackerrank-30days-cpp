#include<iostream>
#include<string>
using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    //Declare second integer, double, and string variables.
    int user_int;
    double user_double;
    string line;

    //Read and save an integer, double, and string to your variables.
    cin>>user_int;
    cin>>user_double;
    cin.ignore(256,'\n'); // remaining charecters ignored until newline
    getline(cin, line);

    //Print the sum of both integer variables on a new line.
    cout<<i+user_int<<endl;

    //Print the sum of the double variable on a new line.
    cout.precision(1);
    cout<<fixed<<d+user_double<<endl;

    //Concatenate and print the string variables ona new line
    //The 's' variable above should be printed first.
    cout<<s<<line<<endl;

    return 0;
}
