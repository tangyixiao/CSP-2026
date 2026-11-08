#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	vector<int> d(n+1);
	map<int,int> p;
	for(int i=1;i<=n;i++) cin>>d[i];
	
	for(int lc=1;lc<=n;lc++){
		map<int,bool> mp;
		for(int i=lc;i<=n;i++){
			if(mp[d[i]]){
				int j=i-1;
				for(;d[j]!=d[i];j--)
					mp[d[j]]=false;
				mp[d[j]]=false;
			}
			mp[d[i]]=true;
		}
		for(int i=1;i<=m;i++)
			p[i]+=mp[i];
	}
	
	for(int i=1;i<=m;i++)
		cout<<p[i]<<' ';
	return 0;
 }
