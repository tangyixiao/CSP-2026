#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n,m,a[500005],cnt[200005];
bool appeared[200005];
signed main(){
	ios::sync_with_stdio(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		
	}
	for(int i=1;i<=n;i++){
		vector<int> v;
		for(int j=i;j<=n;j++){
			if(!appeared[a[j]])appeared[a[j]]=1,v.push_back(a[j]);
			else{
				while(v[v.size()-1]!=a[j])appeared[v[v.size()-1]]=0,v.pop_back();
			}
		}
		for(int j=1;j<=m;j++)if(appeared[j])cnt[j]++,appeared[j]=0;
	}
	for(int i=1;i<=m;i++)cout<<cnt[i]<<' '; 
}