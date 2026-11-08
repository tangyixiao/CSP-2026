#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans,maxx;
bool bj[200005],pd;
string s[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		int len=0;
		while(a[i]){
			if(a[i]%2) s[i][len++]='1';
			else s[i][len++]='0';
			a[i]/=2;
		}
		maxx=max(maxx,len);
	}
	for(int j=0;j<30;j++){
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(pd&&bj[i]==0) continue;
			if(s[i][j]=='1'){
				cnt++;
				bj[i]=1;
			}
		}
		if(cnt>=m){
			ans+=(1<<j);
			pd=1;
		}
		else if(!pd) memset(bj,0,sizeof(bj));
	}
	cout<<ans;
	return 0;
}
