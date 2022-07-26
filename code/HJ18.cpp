#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;



int main(){
    int a1,a2,a3,a4;
    int A,B,C,D,E,error,per;
    A=B=C=D=E=error=per=0;
    int b1,b2,b3,b4;
    int flag = 1;
    while(flag!=-1){
        flag = scanf("%d.%d.%d.%d~%d.%d.%d.%d",&a1,&a2,&a3,&a4,&b1,&b2,&b3,&b4);
        if(flag == -1){
            break;
        }
        if(flag!=8){
            error++;
            continue;
        }
        if(a1 == 0 || a1 == 127){
            continue;
        }
        if(a1<126&&a1>0){
            if(b1 == 255 && b2 + b3 + b4 == 0){
                if(a1 == 10){
                    per++;
                }
               A++;
            }
            else{
                error++;
            }
        }
        else if(a1<=191 && a1 >= 128){
             if(b1 + b2 == 2*255 && b3 + b4 == 0){
                if(a1 == 172&& a2 >= 16 && a2 <= 31){
                    per++;
                }
               B++;
            }
            else{
                error++;
            }
            
        }
        else if(a1 <= 223 && a1 >= 192){
            // int flag1 = (b1 == b2 == b3 == 255);
            // int flag2 = (b4 == 0);
            if(b1 + b2 + b3 == 3*255 &&  b4 == 0){
                if(a1 == 192 && a2 == 168){
                    per++;
                }
                C++;
            }
            else{
                error++;
            }
        }
        else if(a1 <=239 && a1 >=224 ){
            D++;
        }
        else if(a1 <= 255 && a1 >= 240){
            E++;
        }
        else{
            error++;
        }

    }
    cout << A<<' ' << B<<' ' << C<<' ' <<D << ' '<<E <<' '<<error <<' '<<per;
    return 0;
}




// 10.70.44.68~255.254.255.0
// 1.0.0.1~255.0.0.0
// 192.168.0.2~255.255.255.0
// 19..0.~255.255.255.0