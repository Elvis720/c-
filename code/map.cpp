#include <iostream>
#include <map>
//map是一对一，mutilmap是一对多
int main(){
    using namespace std;

    map<int,char> M;
    for(int i = 0; i < 10 ; i++){
        pair<int,char> p(i,100+i);
        M.insert(p);
    }
    
    map<int,char>::iterator it = M.begin();
    while (it != M.end())
    {
       cout << (*it).first << (*it).second << endl;
       it++;
    }
    //修改map中的值
    //map可以用数组的形式进行访问
    M[0]++;
    cout << M.begin()->second << endl;
    

    return 0;
}