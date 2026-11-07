#include<bits/stdc++.h>
using namespace std;
struct a{
    int che;
    string zuo;
}R,X;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin >> R.che >> R.zuo >> X.che >> X.zuo;
    if(R.che==X.che) cout << 1;
    else cout << 0;
    if(R.zuo[0]==X.zuo[0]&&R.zuo[1]==X.zuo[1])cout << 1;
    else cout << 0;
    if((R.zuo[2]>='A'&&R.zuo[2]<='C'&&X.zuo[2]>='A'&&X.zuo[2]<='C')||(R.zuo[2]>='D'&&R.zuo[2]<='E'&&X.zuo[2]>='D'&&X.zuo[2]<='E'))cout << 1;
    else cout << 0;
    if(R.zuo[2]+1==X.zuo[2]||R.zuo[2]-1==X.zuo[2]){
        if(R.zuo[2]=='C'&&X.zuo[2]=='D')cout << 0;
        else if(R.zuo[2]=='D'&&X.zuo[2]=='C')cout << 0;
        else cout << 1;
    }
    else cout << 0;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
