#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
int a[500005];
bool flag=0;
int out[500005]={},cnt=1,rest[500005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			out[cnt]=a[j];
			for(int s=1;s<cnt;s++){
				if(out[s]==a[j]&&out[s]!=0){
					out[s]=a[j];
					flag=1;
				}
				if(flag){
					out[s+1]=0;
				}
			}
			if(cnt==n-i+1){
				for(int s=1;s<=cnt;s++){
					rest[out[s]]++;
				}
			}
			cnt++;
		}
		cnt=1;
		memset(out,0,sizeof(out));
		flag=0;
	}
	for(int i=1;i<=m;i++){
		cout<<rest[i]<<" ";
	}
	return 0;
} 
