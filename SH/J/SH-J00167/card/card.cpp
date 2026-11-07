#include<bits/stdc++.h>
using namespace std;
int n,m;
int cnt[300005],a[500005];
bool f[300005];
stack<int> s;
int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(a[j]==a[j-1])continue;
            if(f[a[j]])
                while(s.top()!=a[j]){
                    f[s.top()]=0;
                    s.pop();
                }
            else {
                s.push(a[j]);
                f[a[j]]=1;
            }
        }
        while(!s.empty())
        {
            cnt[s.top()]++;
            f[s.top()]=0;
            s.pop();
        }
    }
    for(int i=1;i<=m;i++)cout<<cnt[i]<<" ";

    return 0;
}
