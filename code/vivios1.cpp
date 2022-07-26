#include <iostream>
#include <string>
using namespace std;

int main(){
    int nums;
    int arry[8] = {};
    while(cin >> nums){

        for(int i= 0;i < 8;i++ ){
            arry[i] = (nums&1);
            
            nums = nums >> 1;
        }
         for(int i= 0;i < 8;i++ ){
           cout << arry[7-i] << ' ';
        }
    }


    return 0;
}

// 1 1 1 1 0 0 0 0 0 0 0 0 1 0 0 0 0 0 1 0 0 0 1 0
// 1 1 1 1 0 0 0 0 0 0 0 0 1 0 0 0 0 0 1 0 0 0 1 0 