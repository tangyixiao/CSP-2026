#include<bits/stdc++.h>
using namespace std;
int n,m,ans,y;
vector<int>f[35];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1,x;i<=n;i++){
		scanf("%d",&x);
		for(int j=0;j<=30;j++)
			if(x>>j&1)f[j].push_back(x);
	}
	for(int i=30;i>=0;i--)
		if(f[i].size()>=m){
			y=i;
			break;
		}
	for(int i=y;i>=0;i--)
		if(f[i].size()>=m){
			ans+=1<<i;
			if(i==0)break;
			f[i-1].clear();
			for(int j:f[i])
				if(j>>(i-1)&1)
					f[i-1].push_back(j);
		}else{
			f[i-1].clear();
			for(int j:f[i+1])
				if(j>>(i-1)&1)
					f[i-1].push_back(j);
		}
	printf("%d",ans);
	return 0;
}

