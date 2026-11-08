#include<bits/stdc++.h>
using namespace std;
int n,m,a[200020],ans=(1<<30)-1,cnt;
int b[200020][40];
int c[200020];
int f(int a,int s){
	return (a>>(s-1))&1;
}
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;cnt=n;
	for(int i=1;i<=n;i++){
		cin>>a[i];

	}sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=30;j++){
			b[i][j]=f(a[i],j);
			b[0][j]+=f(a[i],j);
		} 
	}
	for(int j=30;j>=1;j--){
		if(b[0][j]<m)continue;
		if(b[0][j]==m){
			for(int i=1;i<=n;i++){
				if(b[i][j]==1){
					ans=ans&a[i];
				}
			}
			cout<<ans;
			return 0;
		}
		if(b[0][j]>m){
			for(int i=1;i<=n;i++){
				if(b[i][j]!=1&&c[i]!=1){
					c[i]=1;
					cnt--;
					for(int k=j-1;k>=1;k--){
						if(b[i][k]==1)b[0][k]--;
						b[i][k]=0;
					}
				}
			}
			if(cnt==m){
				for(int i=1;i<=n;i++){
					if(c[i]!=1){
						ans=ans&a[i];
					}
				}
				cout<<ans;
				return 0;		
			}
		}
	}
	int aoe=0;
	for(int i=1;i<=n&&aoe<m;i++){
		if(c[i]!=1){
			ans=ans&a[i];
			aoe++;
		}
	}cout<<ans;
	return 0;
}
