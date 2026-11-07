#include <bits/stdc++.h>
using namespace std;
long long maxn=-1e8;
long long a[200010];
bool cmp(const int &x,const int &y){
	int x1=x & maxn,y1=y & maxn;
	return x1>y1;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,ans;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>maxn) maxn=a[i];
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<m;i++){
		a[i+1]=a[i] & a[i+1];
	}
	ans=a[m];
	cout<<ans<<endl;
	return 0;
}
