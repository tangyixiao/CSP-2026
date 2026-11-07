#include <bits/stdc++.h>
using namespace std;
int main(){
    freopem("travel.in","w",stdin);
    freopen("travel.out","r",stdout);
    int c1,c2;
    char s1,s2;
    cin >> c1 >> s1 >> c2 >> s2;
    int n1=0,n2=0,n3=0,n4=0;
    int qc,qs;
    char xc,xs;
    qc+=(c2[0]*10+c2[1]);
    qs+=(s2[0]*10+s2[1]);
    xc=c2[2];
    xs=s2[2];
    if(c1==s1){
        n1=1;
    }
    if(qc==qs){
        n2=1;
    }
    if(xc>='A'&&xc<='C'&&xs>='A'&&xs<='C' || (xc=='D'||xc=='F')&&(xs=='D'||xs=='F')){
        n3=1;
    }
    if(xc=='A'&&xs=='B'||xc=='B'&&xs=='A'||xc=='B'&&xs=='C'||xc=='C'&&xs=='B'||xc=='D'&&xs=='F'||xc=='F'&&xs=='D'||){
        n4=1;
    }
    cout << n1 <<n2 << n3 << n4;
    return 0;
}