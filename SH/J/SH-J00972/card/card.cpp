#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],ans[300010];
int s[500010],len;
void solve1(){
	for(int i=1;i<=n;i++){
		len=0;
		for(int j=i;j<=n;j++){
			for(int k=1;k<=len;k++){
				if(a[j]==s[k]){
					len=k-1;
					break;
				}
			}
			s[++len]=a[j];
		}
		for(int j=1;j<=len;j++) ans[s[j]]++;
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(n<=500) solve1();
	else{
		for(int i=1;i<=n;i++){
			if(a[i]!=a[i-1]) ans[a[i-1]]=i-1;
		}
		ans[n]=n;
		for(int i=1;i<=m;i++) cout<<ans[i];
	}
	return 0;
}
