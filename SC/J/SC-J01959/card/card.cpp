#include<bits/stdc++.h>
using namespace std;
int n,m,a[300005],nEx[500005],lAs[300005],ans[300005],o;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		nEx[lAs[a[i]]]=i;
		lAs[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		o=i;
		while(1){
			if(nEx[o]==0)ans[a[o]]++;
			if(o==n)break;
			if(nEx[o]==0)o++;
			else o=nEx[o];
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}