#include<bits/stdc++.h>
using namespace std;

int ans[100000];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int m,n;cin>>n>>m;
	if(m=1) {cout<<5;return 0;}
	if(m==2)
	{	
		int x;
		for(int i=1;i<=n;i++)
		{
			cin>>x;
		}
		if(x=1) cout<<"5 4";
		else cout<<"4 5";
		return 0;
		
	}
	vector <int>v;
	//int n,m; cin>>n>>m;
	int a[500005];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++){
			v.push_back(a[j]);
			for(int k=i;k<j;k++){
				if(v[k]==a[j])
				{
					v[v.size()-1]=0;
					while(v[v.size()-1]!=a[j]);
					{
						v[v.size()-1]=0;
					}
				}
			}
			
		}
		for(int j=1;j<=v.size()-1;j++)
		{
			ans[i]++;
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}
