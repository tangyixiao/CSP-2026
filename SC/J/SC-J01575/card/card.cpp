#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005];
bool vis[300005];
int cnt[500005];
vector<int> v,t;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<i;j++)v.push_back(a[i]);
		for(int j=i;j<=n;j++){
			if(!vis[a[j]]){
				t.push_back(a[j]);
				vis[a[j]]=true;
			}
			else{
				bool flag=false;
				int pos;
				for(int c=0;c<t.size();c++){
					if(t[c]==a[j])pos=c,flag=true;
					if(flag)v.push_back(t[c]);
				}
				int num=t.size()-pos;
				for(int c=1;c<=num;c++){
					vis[t[pos]]=false;
					t.erase(t.begin()+pos);
				}
				t.push_back(a[j]);
				vis[a[j]]=true;
			}
		}
		for(int j=1;j<=m;j++)if(vis[j])cnt[j]++;
		memset(vis,0,sizeof vis);
		v.clear();t.clear();
	}
	for(int i=1;i<=m;i++)cout<<cnt[i]<<" ";
	return 0;
}