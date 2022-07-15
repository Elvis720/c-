#include"iostream"
#include"stdio.h"
#include"vector"
using namespace std;

int main(){
    string str;
    char c;
    int num;
    char cs[10];
    int nums[10];
    //字符串转字符数组
    //限制条件：字符串长度未知
    //思路：下标访问字符串，一个一个存入vector中，然后vector转数组
    cin >> str;
    vector<int> temp;
    for(int i = 0;i < str.size(); i++){
        temp.insert(temp.begin(),str[i]);
    }
    char array[] = ;
    memcpy
    cout << 
    return 0;
}