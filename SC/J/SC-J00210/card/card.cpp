#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500005],ans1[2000009],b[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			b[a[j]]+=1;
			if(b[a[j]]>1){
				for(int k=j-1;;k--){
					b[a[k]]=0;
					if(a[k]==a[j]) break;
				}
				b[a[j]]=1;
			}
		}
		for(int j=1;j<=m;j++){
			ans1[j]+=b[j];
		}
		memset(b,0,sizeof(b));
	}
	for(int j=1;j<=m;j++){
		cout<<ans1[j]<<" ";
	}
	return 0;
}