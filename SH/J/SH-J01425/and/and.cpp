#include <bits/stdc++.h>
using namespace std;
int n,m,i;
long long a[200005],maxn;
bool cmp(const long long &a,const long long &b){
	if(a>b) return true;
	else return false;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
	}
	if(m==1){
		cout<<maxn;
		return 0;
	}else if(m==2){
		maxn=0;
		for(i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++) maxn=max(maxn,a[i]&a[j]);
		cout<<maxn;
		return 0;
	}
	sort(a+1,a+1+n,cmp);
	for(i=1;i<=m;i++){
		if(i==1) maxn=a[i];
		else maxn&=a[i];
	}
	cout<<maxn;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
