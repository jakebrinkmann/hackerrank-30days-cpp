#include <cmath>
#include<cstdio>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;
class Calculator {
    public: 
        int power(int n, int p){
            int temp=1;
            for(int i=0; i<p; i++){
                temp *= n;
            }
            return temp;
        }
};
int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}
