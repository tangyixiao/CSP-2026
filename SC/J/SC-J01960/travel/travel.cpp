#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;

string r_car,r_seat,x_car,x_seat,ans;
bool p1,p2,p3,p4;

int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);

    cin>>r_car>>r_seat>>x_car>>x_seat;

    //problem 1
    if(r_car==x_car){
        ans+="1";
        p1=1;
    }else{
        ans+="0";
        p1=0;
    }

    //problem 2
    if(p1 && r_seat.substr(0,2)==x_seat.substr(0,2)){
        ans+="1";
        p2=1;
    }else{
        ans+="0";
        p2=0;
    }

    //problem 3
    if(p2 && ((r_seat[2]<='C' && x_seat[2]<='C') || (r_seat[2]>'C' && x_seat[2]>'C'))){
        ans+="1";
        p3=1;
    }else{
        ans+="0";
        p3=0;
    }

    //problem 4
    if(p3){
        int r_num=r_seat[2],x_num=x_seat[2];
        if(abs(r_num-x_num)==1){
            ans+="1";
            p4=1;
        }else if((r_seat[2]=='D' && x_seat[2]=='F') || (r_seat[2]=='F' && x_seat[2]=='D')){
            ans+="1";
            p4=1;
        }else{
            ans+="0";
            p4=0;
        }
    }else{
        ans+="0";
        p4=0;
    }

    cout<<ans;

    return 0;
}