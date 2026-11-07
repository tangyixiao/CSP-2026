#include<bits/stdc++.h>
using namespace std;
bool check1,check2,check3,check4;


int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    int num1,num2,a,b;
    char seat1,seat2;
    cin >>num1>>a>>seat1>>num2>>b>>seat2;
    if(num1==num2)  {
        check1=1;
        if(a==b){
            check2=1;
            if(((seat1>='A'&&seat1<='C')&&(seat2>='A'&&seat2<='C'))||((seat1=='D'&&seat2=='F')||(seat1=='F'&&seat2=='D'))){
                check3=1;
                if(seat1+1==seat2||seat1-1==seat2) check4=1;
                else {
                	check4=0;
				}
            }
            else{check3=0;check4=0;}
        }
        else{check2=0;check3=0;check4=0;}

    }
    else{check2=0;check3=0;check4=0;check1=0;}
    cout <<check1<<check2<<check3<<check4;






	return 0;
}
