#include"iostream"
#include"cstring"
using namespace std;

int main(){
    int nums;
    cin >> nums;
    //int * array = new int[nums];
    //cout << sizeof array;
    //-----------------------------------------
    //字符串转数组

    char * p = new char[nums];
    cin >> p;
    char array[10];
    strcpy(array,p);
    cout << p << endl;
    cout << array;
    return 0;
}