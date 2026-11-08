#include<bits/stdc++.h>
using namespace std;
int n,a[500001],m,ans[500001],ans2[500001];
bool Axingzhi(){
	for(int i=1;i<=n;i++){
		if(a[i-1]>a[i])return 0;
	}
	return 1;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ans[a[i]]=i;
		ans2[a[i]]++;
	}
	if(Axingzhi()){
		for(int i=1;i<=m;i++){
			cout<<ans[i]<<" ";
		}
	}
	else {
		for(int i=1;i<=m;i++){
			cout<<ans2[i]<<" ";
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
