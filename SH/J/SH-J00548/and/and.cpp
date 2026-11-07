#include<bits/stdc++.h>
using namespace std;
int a[200005],b[200005],c[200005],x[200005];
int g[200005][35];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		x[i]=a[i];
	}
	//二进制拆分
	for(int i=1;i<=n;i++){
		int j=1;
		while(x[i]){
			g[i][j]=x[i]%2;
			x[i]/=2;
			j++;
		}
	} 
	int lcur=n; 
	for(int i=1;i<=n;i++){
		c[i]=i;
	} 
	for(int j=35;j>=1;j--){
		//memset(b,0,sizeof b);
		int sum=0;
		for(int k=1;k<=lcur;k++){//剩下的 
			int i=c[k];
			if(g[i][j]==1){
				b[++sum]=i;
			}
		}
		//cout<<sum<<" ";
		///for(int i=1;i<=sum;i++){
		//	cout<<a[b[i]]<<" ";
		//}cout<<endl;
		if(sum==m){
			int ans=a[b[1]];
			//cout<<ans<<endl;
			for(int i=2;i<=sum;i++){
				ans&=a[b[i]];
				//cout<<ans<<endl;
			}
			cout<<ans<<endl;
			return 0;
		}else if(j==1){
			int ans=a[b[1]];
			for(int i=2;i<=m;i++){
				ans&=a[b[i]];
			}
			cout<<ans<<endl;
			return 0;
		}else if(sum>m){
			for(int i=1;i<=sum;i++){
				c[i]=b[i]; 
			}
			lcur=sum;
		}
	}
	cout<<0<<endl;
	return 0;
} 
