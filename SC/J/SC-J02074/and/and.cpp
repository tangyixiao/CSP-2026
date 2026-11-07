#include <bits/stdc++.h>
using namespace std;

int n,m;
long long b[200010];
bool cmp(long long x,long long y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	vector<long long> a(n+5,0);
	for(int i=1;i<=n;i++){
		cin>>a[i];

	}
	vector<long long> d(m+5,0);
	for(int i=1;i<=n;i++){
		int  q=0;
		while(a[i]!=0){
			q++;
			b[i]+=a[i]%2*pow(10,q-1);
			a[i]/=2;
		}
		
	}
	sort(b,b+n,cmp);
	for(int i=2;i<=m;i++){
		b[i]&=b[i-1];
	}
	cout<<b[m];
	return 0;
}