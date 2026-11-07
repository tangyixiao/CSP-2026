#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200005],aa[200005];
bool t[200005][105];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) aa[i]=a[i];
	for(int i=1;i<=n;i++){
		int tot=0;
		while(a[i]>0){
			t[i][++tot]=a[i]%2;
			a[i]/=2;
		}
	}
	
	
	for(int i=32;i>=1;i--){
		int ans=0;
		for(int j=1;j<=n;j++){
			if(t[j][i]==1) ans++;
		}
		if(ans==m){
		for(int j=1;j<=n;j++){
			if(t[j][i]==0){
				aa[j]=0;
				for(int k=1;k<=32;k++) t[j][k]=0;
			} 
		}
			break;	
	}
		if(ans>m){
			for(int j=1;j<=n;j++){
				if(t[j][i]==0){
					aa[j]=0;
					for(int k=1;k<=32;k++) t[j][k]=0;
				}
			}
		}
	}
	int yyh[m],yxy=0;
	for(int i=1;i<=n;i++){
		if(aa[i]!=0) yyh[++yxy]=aa[i];
	}
	int cjy=yyh[1];
	for(int i=2;i<=m;i++) cjy=(cjy&yyh[i]);
	cout<<cjy;
	return 0;
} 
