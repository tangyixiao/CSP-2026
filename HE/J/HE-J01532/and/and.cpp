#include<bits/stdc++.h>
using namespace std;
bool p(int a,int b){
    return a>b;
}
int main(){
    freopen("and.in","r",stdin);
    freopen("and.out","w",stdout);
    int n,m,h;
    cin>>n>>m;
    int f[n];
    for(int i=0;i<n;i++){
        cin>>f[i];
    }
    sort(f,f+n,p);
    h=f[0];
    for(int i=1;i<m;i++){
        h=h&f[i];
    }
    cout<<h;
    return 0;
}
