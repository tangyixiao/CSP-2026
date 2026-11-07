#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200002],b[200002],ans=-1;
long long yu(int x){
	int k=0,l;
	for(int i=1;i<=n;i++){
		if(i==x)continue;
		l=b[x]&a[i];
		k=max(k,l);
	}
	return k;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	while(m--){
		for(int i=1;i<=n;i++){
			b[i]=yu(i);
		}
	}
	for(int i=1;i<=n;i++)ans=max(ans,b[i]);
	cout<<ans<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
