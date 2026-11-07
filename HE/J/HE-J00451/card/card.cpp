#include<bits/stdc++.h>
using namespace std;
int n,m,a[200006],f=1,ma[6006],vis[6006];
vector<int>la[3006];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		f=f&(a[i]>=a[i-1]);
	}
	for(int s=1;s<=n;s++){
		for(int i=1;i<=n;i++){
			vis[i]=0;
			la[a[i]].clear();
		}
		for(int j=s;j<=n;j++){
			vis[j]=1;
			if(!la[a[j]].empty()){
				int x=la[a[j]].back();
				la[a[j]].pop_back();
				for(int k=x;k<j;k++){
					if(vis[k]){
						vis[k]=0;
						if(!la[a[k]].empty())la[a[k]].pop_back();
					}
				}
			}
			la[a[j]].push_back(j);
		}
		for(int i=1;i<=n;i++){
			if(vis[i])ma[a[i]]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<ma[i]<<' ';
	return 0;
}
