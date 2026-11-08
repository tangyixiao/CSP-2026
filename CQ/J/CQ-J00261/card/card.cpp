#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],b[500010],t[500010];
long long d[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		b[a[i]]=i;
		t[a[i]]++;
	} 
	for(int i=1;i<=m;i++){
		d[i]+=t[i];
	//	cout<<i<<" "<<t[i]<<" "<<b[a[i]];
		for(int j=b[i]+1;j<=n;j=b[a[j]]+1){
			d[a[j]]+=t[i];
	//		cout<<j<<" "; 
		}
	//	cout<<endl;
	}
//	d[a[n]]--;
	for(int i=1;i<=m;i++){
		printf("%lld ",d[i]);
	}
	return 0;
}
