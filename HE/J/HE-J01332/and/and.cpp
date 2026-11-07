#include<bits/stdc++.h>
using namespace  std;
long long a[100000001];
long long x[200001];
long long n,m,ans,maxn=-1e9;
int l=0;
void ff(){
	for(long long i=maxn-1;i>=0;i--){
		if(a[i]==0) continue;
		if(m==0) break;
		int y=ans&i;
		if(y==0) continue;
		for(long long j=1;j<=a[i];j++){
			if(m==0) break;
			ans=ans&i;
			m--;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=0;i<n;i++){
		cin>>x[i];
		a[x[i]]++;
		l++;
	}
	l--;
	sort(x,x+n);
	ans=x[l];
	maxn=x[l];
	m-=1;
	l--;
	ff();
	while(ans==maxn){
		ans=x[l];
		maxn=x[l];
		ff();
		l--;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
