#include<bits/stdc++.h>
using namespace std;
int a[200005],mp[55][200005],t[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,k=0,q=0,maxn=-1e9,ans=0;bool flag=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
	}
	k=log(maxn)/log(2);
	for(int i=k;i>=0;i--){
		int s=0,p=0;
		if(flag==0){
			for(int j=1;j<=n;j++){
				if(a[j] & (1<<i)){
					s++;
					mp[i][j]=1;
				}
			}
		}else if(flag==1){
			for(int j=1;j<=q;j++){
				if(a[t[j]] & (1<<i)){
					p++;
					mp[i][j]=1;
				}
			}
		}
		if(p>=m)ans+=(1<<i);
		if(s>=m&&flag==0){
			flag=1;
			for(int j=1;j<=n;j++){
				if(mp[i][j]==1)t[++q]=j;
			}
			ans+=(1<<i);
			continue;
		}
	}
	cout<<ans;
	return 0;
}
