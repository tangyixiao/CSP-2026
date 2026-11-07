#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+50;
int n,m,a[N],ans[N];
map<int,int>mp;
stack<int>q;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++){
    	mp.clear();
    	while(!q.empty())q.pop();
    	for(int j=i;j<=n;j++){
    		if(mp[a[j]]==0){
    			mp[a[j]]=1;
    			q.push(a[j]);
			}
			else{
				while(q.top()!=a[j]){
					mp[q.top()]=0;
					q.pop();
				}
			}
		}
		for(int j=1;j<=m;j++)if(mp[j]==1)ans[j]++;
	}
    for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}

