#include <bits/stdc++.h>
using namespace std;

int ans_[500005],a[500005];
queue<int> q;

int main()
{
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);

    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int n_=n,i=1;
    while(n_--){
        for(int j=1;j<=n;j++){
            q.push(a[j]);
        }
        for(int j=1;j<=i-1;j++) q.pop();
        stack<int> s;
        int ans[500005]={};
        while(!q.empty()){
            if(ans[q.front()]>0){
                while(s.top()!=q.front()){
                    ans[s.top()]--;
                    s.pop();
                }
                ans[s.top()]--;
                s.pop();
                s.push(q.front());
                ans[q.front()]++;
                q.pop();
            }

            else{
                s.push(q.front());
                ans[q.front()]++;
                q.pop();
            }

        }
        for(int j=1;j<=m;j++){
            ans_[j]+=ans[j];
        }
        i++;
    }
    for(int j=1;j<=m;j++){
            cout<<ans_[j]<<' ';
        }
    return 0;
}
