#include<bits/stdc++.h> 
using namespace std;
int g[200005][32];
vector<int>a;
int main()
{
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);

	ios::sync_with_stdio(false);
	cin.tie(0);
	//vector<vector<int>>g;
	int n,x;
	cin>>n>>x;
	
	for(int i = 0;i<n;i++)
	{
		int u;cin>>u;
		a.push_back(u);
		int bit = 0;
		while(u>0)
		{
			g[i][bit]=u%2;
			u/=2;
			bit++;
		}
		
	}
	int ans = 0;int stay[200005];
	for(int i = 0;i<n;i++){stay[i]=1;
	}
	for(int bit = 31;bit>=0;bit--){
		
		vector<int>vis;
		for(int j = 0;j<n;j++){
			if(g[j][bit]&&stay[j]){vis.push_back(a[j]);}
		}
		if(vis.size()<x){continue;}
		if(vis.size()==x){
			ans = vis[0];
			for(int k = 1;k<vis.size();k++){ans&=vis[k];}
			cout<<ans;
			return 0;
		}
		
		else
		{
			a.clear();
			for(int i = 0;i<vis.size();i++){a.push_back(vis[i]);
			
			}
			for(int i = 0;i<n;i++){
				if(!g[i][bit]){stay[i]=0;
				}
			}
			
		}
	
	}
	
	ans=a[0];
	for(int i = 1;i<a.size();i++){ans&=a[i];}
	
	cout<<ans;
	return 0;
	
}

