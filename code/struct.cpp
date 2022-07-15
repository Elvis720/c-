#include"iostream"
#include"string"
using namespace std;
struct fuck{
        int age : 4;
        int height;
        int weight;
        string homeland;
};
union gf{
    int age;
    double classroom;
};
int main(){
    // fuck  num[2] ;
    // num[1] =
    // {
    // 32,
    // 171, 
    // 110,
    // "china"
    // };
    // cout << num[1].age << num[1].homeland << endl;

    // num[0] = num[1];
    // cout << num[0].weight;
    gf ztj;
    ztj.age = 19;
    cout << ztj.classroom;

    return 1;
}