#include<bits/stdc++.h>
using namespace std;
int pos[300001],pok[500001],len,a[200001],ans[200001];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[n-i+1];
    for(int i=1;i<=n;i++){
        if(pos[a[i]]>len||pos[a[i]]==0){
            pos[a[i]]=++len;
            pok[len]=a[i];
        }
        else{
            len=pos[a[i]];
        }
        for(int i=1;i<=len;i++){
            ans[pok[i]]++;
        }
    }
    for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
}