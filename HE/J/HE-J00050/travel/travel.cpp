#include <bits/stdc++.h>
using namespace std;
string c[5],d[5];
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    for(int i=1;i<=2;i++) cin >> c[i];
    for(int i=1;i<=2;i++) cin >> d[i];
    if(c[1][0]==d[1][0]&&c[1][1]==d[1][1])
        cout << 1;
    else {
        cout << 0 << 0 << 0 << 0;
        return 0;
    }
    if(c[2][0]==d[2][0]&&c[2][1]==d[2][1])
        cout << 1;
    else{
        cout << 0 << 0 << 0;
        return 0;
    }
    if((c[2][2]=='C'&&d[2][2]=='D')||(c[2][2]=='D'&&d[2][2]=='C')){
        cout << 0 << 0;
        return 0;
    }
    else
        cout << 1;
    if(c[2][2]==d[2][2]+1||c[2][2]==d[2][2]-1)
        cout << 1;
    else
        cout << 0;
    return 0;
}
