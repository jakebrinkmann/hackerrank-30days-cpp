#include<iostream>
#include<vector>
#include<climits>
#define WIDTH 6
#define HEIGHT 6
using namespace std;

int main(){
    vector< vector<int> > arr(WIDTH, vector<int>(HEIGHT));
    for(int arr_i=0; arr_i<WIDTH; arr_i++){
        for(int arr_j=0; arr_j<HEIGHT; arr_j++){
            cin >> arr[arr_i][arr_j];
        }
    }

    // Assume an 'hourglass' is always 3x3
    //      a b c
    //        d
    //      e f g
    int maxSum = INT_MIN;
    for(int arr_x=0; arr_x<WIDTH-2; arr_x++){
        for(int arr_y=0; arr_y<HEIGHT-2; arr_y++){
            int thisSum = 0;
            for(int hour_x=0; hour_x<3; hour_x++){
                for(int hour_y=0; hour_y<3; hour_y++){
                    if((hour_x==1) and ((hour_y==0) or (hour_y==2))){
                        continue; //Ignore the "fins"
                    } else {
                        thisSum+=arr[arr_x+hour_x][arr_y+hour_y];
                    }
                }
            }
            if(thisSum>maxSum){
                maxSum=thisSum;
            }
        }
    }
    cout << maxSum <<endl;
    return 0;
}
