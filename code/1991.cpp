#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ans = -1;
        int lenght = nums.size();
       //找到一个中间的数 左边和 等于
       //做一个数组每位村的 都是 nums 的sum
       //创建数组arry 长度等于 nums的长度
       int *arry = new int[lenght];
       //将一个到下标位置的数组的和都存入
       int temp = 0;
       for(int i = 0;i < lenght;i++){
           temp += nums[i];
           arry[i] = temp;
       }
       //计算 arry[ans - 1] 是否等于 arry[lenth - 1] - arry[ans] ,成立的话更新ans
       for(int i = 1; i < lenght;i++){
           if(arry[i - 1] == arry[lenght-1] - arry[i]){
               ans = i;
               break;
           }
       }
       //返回ans
        return ans;

    }
};

int c