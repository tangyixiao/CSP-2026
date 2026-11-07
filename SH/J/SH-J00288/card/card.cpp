#include <bits/stdc++.h>
using namespace std;
const int N=200005;
int n,m,a[N],len,mp[N],ans[N],ni=0;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		if (a[i]<a[i-1])ni++;
	}
	for (int r=1;r<=n;r++){
		for (int i=0;i<=len;i++)mp[i]=0;
		len=1;
		for (int i=r;i<=n;i++){
			if (len>1&&ni>0){
			for (int j=len-1;j>=1;j--)
				if (mp[j]==a[i]){
					len=j;break;
				}
			}
			if (ni==0&&len>1){
				if (a[i]==mp[len-1])len--;
			}
			mp[len++]=a[i];
		}
		for (int i=1;i<len;i++){
			ans[mp[i]]++;
		}
	}
	for (int i=1;i<=m;i++)cout<<ans[i]<<" ";	
	return 0;
}
