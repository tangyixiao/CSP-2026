#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    string S;
    int n,L=0,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        char a;
        cin>>m>>a;
        L+=m;
        for(int j=0;j<m;j++){
             S+=a;
        }
    }
    for(int i=0;i*i<L;i++){
        if(S[i]!=S[L-i]){
            cnt++;
        }
    }
    cout<<cnt;
return 0;}
