#include<bits/stdc++.h>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;
struct piao{
    string xiang,seat;
};
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    piao a,b;
    cin >> a.xiang >> a.seat >> b.xiang >> b.seat;
    if(a.xiang==b.xiang)cout << "1";
    else cout << "0";
    int cnt=0;
    if(a.seat[0]==b.seat[0])cnt++;
    if(a.seat[1]==b.seat[1])cnt++;
    if(cnt==2)cout << "1";
    else cout << "0";
    
    if(((a.seat[2]=='F'||a.seat[2]=='D')&&(b.seat[2]=='A'||b.seat[2]=='B'||b.seat[2]=='C'))||((b.seat[2]=='F'||b.seat[2]=='D')&&(a.seat[2]=='A'||a.seat[2]=='B'||a.seat[2]=='C'))){
        cout << "0";
    }
    else cout << "1";

    if((a.seat[2]=='F'&&b.seat[2]=='D')||(a.seat[2]=='D'&&b.seat[2]=='F')||(a.seat[2]=='C'&&b.seat[2]=='B')||(a.seat[2]=='B'&&b.seat[2]=='C')||(a.seat[2]=='B'&&b.seat[2]=='A')||(a.seat[2]=='A'&&b.seat[2]=='B')){
        cout << "1";
    }
    else cout << "0";
    return 0;
}