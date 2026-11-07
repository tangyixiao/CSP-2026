#include<bits/stdc++.h>
using namespace std;
int n,m,ans[100005];
char a[1000000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int len=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=a[i-1])len++;
		ans[len]=i;
	}
	for(int i=1;i<=len;i++){
		cout<<ans[i];
		if(i!=len)cout<<' ';
	}
	return 0;
}
