#include <bits/stdc++.h>
using namespace std;
string c1;
string s1;
string c2;
string s2;
bool check1(char a,char b){
    if(a=='A'||a=='b'||a=='C'){
        if(b=='A'||b=='B'||b=='C'){
            return true;
        }
    } else{
        if(b=='D'||b=='F'){
            return true;
        }
    }
    return false;
}
bool check2(char a,char b){
    if(a=='A'&&b=='B'){
        return true;
    } else if(a=='B'&&(b=='A'||b=='C')){
        return true;
    } else if(a=='C'&&b=='B'){
        return true;
    } else if(a=='D'&&b=='F'){
        return true;
    } else if(a=='F'&&b=='D'){
        return true;
    }
    return false;
}
int main (){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin>>c1>>s1>>c2>>s2;
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    if(c1==c2){
        a=1;
    } else{
        a=0;
    }
    int num1=(s1[0]-'0')*10+(s1[1]-'0');
    int num2=(s2[0]-'0')*10+(s2[1]-'0');
    if(num1==num2&&a==1){
        b=1;
    }
    char x=s1[2];
    char y=s2[2];
    if(check1(x,y)){
        if(a==1){
            if(b==1){
                c=1;
            }
        }
    }
    if(check2(x,y)){
        if(a==1){
            if(b==1){
                if(c==1){
                    d=1;
                }
            }
        }
    }
    cout<<a<<b<<c<<d<<endl;
    return 0;
}
