#include<bits/stdc++.h>
using namespace std;
int a[200001];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+n+1);
		cout<<a[n]<<endl;
		return 0;
	}
	int ans=(a[1]&a[2]);
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			ans=max(a[i]&a[j],ans);
		}
	}
	printf("%d",ans);
	return 0;
}
