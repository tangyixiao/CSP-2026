#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=5e5+10;
int a[N]; 
int last[N];
int cnt[N];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]); 
		last[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		int u=i;
		vector<int>vv;
		vv.push_back(a[u]);
		while(u<=n){
			if(u!=last[a[u]]){
				u=last[a[u]];
//				vv.push_back(a[u]);
			}
			else{
				u++;
				vv.push_back(a[u]);
			}
		}
		for(auto it:vv){
//			cout<<it<<' ';
			cnt[it]++;
		}
//		cout<<'\n';
	}
	for(int i=1;i<=m;i++){
		printf("%d ",cnt[i]);
	}
	return 0;
} 
