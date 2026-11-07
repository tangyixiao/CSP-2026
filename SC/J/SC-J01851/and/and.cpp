#include<bits/stdc++.h>
using namespace std;
int n,m;
bool a[200010][31];
bool lockn[200010];
bool locknls[200010];
long long cf2[31];
long long ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cf2[0]=1;
	for(int i=1;i<=30;i++){
		cf2[i]=cf2[i-1]*2;
	}
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		long long k;
		cin>>k;
		for(int j=0;k;j++){
			a[i][j]=k%2;
			k/=2;
		}
	}
	
	for(int i=30;i>=0;i--){
		int cnt=0;
		memset(locknls,0,sizeof(locknls));
		for(int j=1;j<=n;j++){
			if(!lockn[j]&&a[j][i]){
				cnt++;
			}else{
				locknls[j]=1;
			}
		}
		if(cnt>=m){
			for(int j=1;j<=n;j++){
				lockn[j]|=locknls[j];
			}
			ans+=cf2[i];
		}
	}
	cout<<ans;
	return 0;
}
