#include "stdio.h"
#include<vector>
using namespace std;

void main(){
    vector<int> v;
    

}


class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ans = -1;
        vector<int> num1;
        vector<int> num2;

        vector<int>::iterator itr1 = nums.begin();
        int temp1 = 0;
        do{
            temp1 += *itr1;
            num1.insert(num1.begin(),temp1);
            itr1++;

        }while(itr1 != nums.end());
        vector<int>::reverse_iterator itr2 = nums.rbegin();
        int temp2 = 0;
        do{
            temp2 += *itr2;
            num2.insert(num2.begin(),temp2);
            itr2++;
        }while(itr2 != nums.rend());


        for(int i = 0;i < nums.size();i++){
            if(num1[i] == num2[i]){
                ans = i;
            }
        }
        return ans;

    }
};