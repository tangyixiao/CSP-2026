#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in ","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long a[n+1];
	for(int i=1;i<=n;i++) cin>>a[i];
	long long o=1e9;
	int x[o]={},l=1,r=1;//模拟栈 
	long long ans[m+1]={};
	for(long long i=1;i<=n;i++){//i局 
		for(long long j=i;j<=n;j++){//出j牌 
			int y=0;
			for(long long k=r;k>=l;k--){//检查有无k
				if(x[k]==a[j]){//有 
					y=1;
					for(long long f=r;f>=k+1;f--)
						x[r]=0,r--;
					break;
				}
			}
			if(y==0) x[++r]=a[j];//没有就加上 
		}
		while(r-l!=0){//统计剩余牌+清空x 
			ans[x[r]]++;
			x[r]=0,r--; 
		}
	}
	for(long long i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
