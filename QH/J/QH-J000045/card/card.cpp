#include<bits/stdc++.h>
using namespace std;
int a[1314520];
int ans[1314520];
int main(){
    freopen("card.in","w",stdin);
    freopen("card.out","r",stdout);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++){
        vector<int>p;
        for(int j=i;j<=n;j++){
            p.push_back(a[j]);
            for(int l=0;l<p.size();l++){
                int k=p[l];
                if(a[j]==k&&j!=i){
                    p.clear();
                    p.push_back(a[j]);
                    break;
                }
            }
        }
        for(int k=0;k<p.size();k++)cout<<p[k]<<" ";
        cout<<endl;
        for(int k=0;k<p.size();k++){
            ans[p[k]]++;
        }
    }
    for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}