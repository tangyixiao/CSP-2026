#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[200005],sum;
map<long,int> ma;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ma[a[i]]++;
	}
	for(map<long,int>::iterator it=ma.begin();it!=ma.end();it++){
		int x=it->second;
		if(x>=m){
			long long xx,y;
			xx=y=it->first;
			for(int i=1;i<m;i++){
				xx=xx&y;
			}
			sum=max(xx,sum);
		}
	}
	sort(a+1,a+1+n);
	long long x=a[n];
	for(int i=n-1;i>=n-m+1;i--){
		x=x&a[i];
	}
	sum=max(sum,x);
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
