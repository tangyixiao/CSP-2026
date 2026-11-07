#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    int c1,c2,a;
    char s1,s2;
    cin >> c1 >> s2 >> c2 >> s2;
    if(c1==c2){
        a=1;
    }else if(c1!=c2){
        a=0;
    }
    if(s1==s2){
        a=2;
    }else if(s1==s2){
        a=3;
    }
    if(a==0){
        cout << "0000";
    }else if(a==2){
        cout << "1100";
    }else if(a==3&&a==1){
        cout <<"1110";
    }
    return 0;
}
