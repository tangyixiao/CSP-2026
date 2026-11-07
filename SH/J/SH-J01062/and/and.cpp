#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	ans=a[n-1];
	for(int i=n-2;i>=n-m;i--){
		ans&=a[i];
	}
	printf("%d",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
