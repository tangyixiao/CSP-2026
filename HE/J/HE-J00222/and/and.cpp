#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+10;
int n,m,ans;
bool a[35][maxn],noww[maxn];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int x; cin>>x;
		for(int j=0;j<=30;j++){
			if((x>>j)&1) a[j][i]=true;
			else a[j][i]=false;
		}
	}
	for(int j=30;j>=0;j--){
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(!noww[i]) cnt+=a[j][i];
		}
		if(cnt>=m){
			ans|=(1<<j);
			for(int i=1;i<=n;i++){
				if(!noww[i]&&!a[j][i]) noww[i]=1;
			}
		}
	}
	cout<<ans<<'\n';
	fclose(stdin); fclose(stdout);
	return 0;
}
