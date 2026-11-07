#include<bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	vector<int>a(n+1,-1);
	int ans[m+1],sum[n+1]={-1};
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int x=1;x<=n;x++){
		for(int i=x;i<=n;i++) sum[i]=a[i];
		for(int i=x;i<=n;i++){
			for(int j=i;j<=n;j++){
				if(sum[j]==sum[i]){
					for(int k=i;k<j;k++) sum[k]=-1;
					break;
				}
			}
			if(i==n){
				for(int j=1;j<=n;j++){
					if(sum[j]!=-1) ans[sum[j]]++;
				}
			}
		}
	}	
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
