#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,m,a[500005],ans[300005],bjt[300005],sta[300005];
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)bjt[j]=0;
        ll top=0;
        for(int k=i;k<=n;k++){
            if(bjt[a[k]]){
                while(sta[top]!=a[k])bjt[sta[top]]--,top--;
            }
            else bjt[a[k]]++,sta[++top]=a[k];
        }
        for(int j=1;j<=m;j++){if(bjt[j])ans[j]++;}
    }
    for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
    return 0;
}