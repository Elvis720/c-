#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

//player
struct player{

    int score;

    int time;

};

//桶
struct bucket{

    int num = 0;//map中成员的数量，开始全部为0；

    map<int,string,less<int>> contians;//key：time（int),  value: id(string)   按照int 从小到大排序

};

class ranklist{

public:
    //函数
    ranklist();

    long long getsum();

    bool p_exist(int id);

    int p_getrank(int id);

    bool p_add(string id,int score,int time); 
    
    bool p_cover(string id,int score,int time);

    bool p_delete(int id);


private:
//成员
    long long sum;

    map<int,bucket,greater<int>> buckets;

    unordered_map<int,player> players;

    
};
