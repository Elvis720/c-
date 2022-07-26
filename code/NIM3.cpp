#include <iostream>
#include <string>

using namespace std;

int main(){
// write code here
    int A[100] = {1,2,4,5,6,7,8};
    int ans = -1;
    int len = A.size
    int *arry = new int[len];
    arry[0] = A[0];
    for(int i = 1;i < len;i++ ){
        arry[i] = arry[i - 1] + A[i];
    }
    if(len < 2){
        return -1;
    }
    for(int i = 1;i < len;i++){
        
    }
    return 0;
}

