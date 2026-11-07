#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	//if(n>500){
		for(int i=2;i<=n;i++){
			if(a[i]!=a[i-1]) ans[a[i-1]]=i-1;
		}
		ans[m]=n;
		for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	//}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
