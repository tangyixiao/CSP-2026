#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans=-1;
bool c;
bool node(int x){
	bool y[100000000];
	int z=1;
	while(x>0){
		y[z]=x%2;
		x/=2;
		z++;
	}
	bool y2[z];
	for(int i=z;i>=1;--i)	y2[z-i]=y[i];
	return y2;
}
int main(){
	freopen("and.in","r",stdin);freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	for(int i=1;i<=n;++i){
		for(int j=i;j<=n;++j){
			if(node(a[i]) and node(a[j])>ans)	ans=node(a[i]) and node(a[j]);
		}
	}
	cout<<ans;
	//fclose(stdin);fclose(stdout);
	return 0;
}
