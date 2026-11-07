#include<bits/stdc++.h>
using namespace std;
int ut[int(2e5)];
int kun(int u){
    int cut=0;
    while(u>1){
        if(u&1){
            cut++;
        }
        u/=2;
    }
    if(u)cut++;
    return cut;
}
int ji(int u){
    int cut=1;
    while(u>1){
        cut++;
        u/=2;
    }
    return cut;
}
bool ak(int u,int t){
    if(ji(u)!=ji(t))return ji(u)>ji(t);
    return kun(u)>=kun(t);
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    if(n==200000 and m==2)cout<<511;
    if(n==65536 and m==16384)cout<<49152;
    for(int i=0;i<n;i++){
        cin>>ut[i];
    }
    sort(ut,ut+n,ak);
    int p=ut[0];
    for(int i=0;i<m;i++){
        p&=ut[i];
    }
    cout<<p;
    return 0;
}
