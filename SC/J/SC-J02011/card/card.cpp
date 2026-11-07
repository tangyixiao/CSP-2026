#include<bits/stdc++.h>
using namespace std;

vector<vector<int> >pos;
int hsh[(int)3e5+10];

int num[(int)3e5+10];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("card.in","r",stdin);
	
	int n,m;cin>>n>>m;
	pos.resize(m+10);
	
	for(int i=1,x;i<=n;i++){
		cin>>x;
		num[i]=x;
		pos[x].push_back(i);
	}
	
	for(int i=1;i<=m;i++){
		if(pos[i].size()>1)sort(pos[i].begin(),pos[i].end());
	}
	
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			int p=num[j];
			if(pos[p].size()<2||pos[p][pos[p].size()-2]<j)hsh[p]++;
			else{
				hsh[p]++;
				j=pos[p][pos[p].size()-1]; 
			} 
			
		}
	}
	
	freopen("card.out","w",stdout);
	
	for(int i=1;i<=m;i++)cout<<hsh[i]<<' ';
	
	
	return 0;
}
