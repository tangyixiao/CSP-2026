#include <bits/stdc++.h>
using namespace std;
long long a[200005]={0};
long long d[200005]={0};
bool cmp(long q,long w){
	return q>w;
}
///262142 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	if (m==1){
		cout<<a[1];
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
//	for (int i=1;i<=n;i++){
//		cout<<a[i]<<" ";
//	}
	for (int i=1;i<=m;i++){
		d[i]=a[i-1]&a[i];
	}
	cout<<d[m];
	fclose(stdin);
	fclose(stdout);
	return 0;
}
