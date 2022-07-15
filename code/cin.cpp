#include <iostream>
#include "string"
#include "cstring"
int main(){
    using namespace std;
    //int num1;
    // char num[20] ;
    // cin.getline(num,10); 
    // cout << num;
    // cout << strlen(num) << endl;
   
    //cout << &str1;
    // str1 + str2 是右值，是临时变量

    
    string str3;
    getline(cin,str3);
    cout << str3;
    return 0;
    //测试 输入类型与目的类型不匹配情况下
    //当输入不是数字时，cin输出0
    //猜测当输入类型与目的类型不匹配
    /*
    cin 传输目的类型初始化的值
    */
   
}