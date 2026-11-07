#include<bits/stdc++.h>
using namespace std;
long long n,a[500005],p[500005],f[300005],s[300005],m;
int main(){
	freopen("card1.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(p,n-i,0);
		memset(f,m,-1);
		int w=1;
		for(int j=i;j<=n;j++){
			if(f[a[j]]==-1){
				f[a[j]]=w;
				p[w]=a[j];
				w++;
			}else{
				for(int k=f[a[j]];k<=w;k++){
					p[k]=0;
				}
				w=f[a[j]];
			}
		}
		for(int j=1;j<=w;j++){
			if(p[i]==i){
				s[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<s[i]<<" ";
	}
}
