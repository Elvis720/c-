#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
//c++实现快排
using namespace std;
vector<string> split(string str,char a);
int qsort(vector<int> &arry,int left, int right){
    if(  left >= right){
        return 0;
    }

}
//输入一行数字，然后把他们按照升序排列
int main(){
    string str;
    getline(cin,str);
    //
    vector<string> v=split(str,' ');


    return 0;
}

vector<string> split(string str,char a){
    vector<string> ans;
    int len = str.size();
    int j = 0;
    string temp;
    for(int i = 0;i < len;i++){
        if(str[i] == a){
            temp = str.substr(j,i-j);
            ans.emplace_back(temp);
            j = i+1;
        }
    }
    temp = str.substr(j,len - j);
    ans.emplace_back(temp);
    return ans;
}

// void quickSort(int *array, int left, int right)
// {
//     if(NULL == array)
//     {
//         return;
//     }
 
// 	if(left < right)
// 	{
// 		int pivot = array[left];
// 		int low = left, high = right;
// 		while(low < high)
// 		{
// 			while(array[high] >= pivot && low < high)
// 				high--;//左边是哨兵位，右边先动
// 			array[low] = array[high];
			
// 			while(array[low] <= pivot && low < high)
// 				low++;
// 			array[high] = array[low];
// 		}
// 		array[low] = pivot;//把哨兵位留下，应该用交换
		
// 		quickSort(array, left, low - 1); 
// 		quickSort(array, low + 1, right);
// 	}
// }
// ————————————————
// 版权声明：本文为CSDN博主「你看，那是海边」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
// 原文链接：https://blog.csdn.net/starzyh/article/details/90272347