#include<bits/stdc++.h>
using namespace std;
string s;
bool check(char a,char b){
    if(a=='A'&&b=='B'){
        return true;
    }
    if(a=='B'&&b=='C'){
        return true;
    }
    if(a=='D'&&b=='F'){
        return true;
    }
    return false;
}
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    getline(cin,s);
    if(s[0]!=s[7]||s[1]!=s[8]){
        cout<<"0000";
        return 0;
    }
    if(s[3]!=s[10]||s[4]!=s[11]){
        cout<<"1000";
        return 0;
    }
    char x=s[5],y=s[12];
    if(!((('A'<=x&&x<='C')&&('A'<=y&&y<='C'))||(('D'<=x&&x<='F')&&('D'<=y&&y<='F')))){
        cout<<"1100";
        return 0;
    }
    if(check(x,y)||check(y,x)){
        cout<<"1111";
    }else{
        cout<<"1110";
    }
    return 0;
}