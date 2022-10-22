#include<iostream>
using namespace std;

extern "C"{
     void fun(double a){
    cout << "int" << endl;
    }
    void fun(int a){
    cout << "const int" <<endl;
    }

}
int main(){

    //cout << value;
    int a  = 0;
    const int b = 0;
    fun(a);
   
    return 0;
}

