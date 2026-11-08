#include<bits/stdc++.h>
using namespace std;

string f(long long x) {
	long long t=x,w=0;
	string s,ans;
	while (t!=0) {
		w++;
		s+=(t%2)+'0';
		t/=2;

	}
	for (long long i=s.size()-1; i>=0; i--) {
		ans+=s[i];
	}

	return ans;
}
long long j(string x) {

	long long ans=0,k=1;

	for (long long i=x.size()-1; i>=0; i--) {
		ans+=(x[i]-'0')*k;
		k*=2;
	}
	return ans;

}
string a[200005];
int main() {
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		long long x;
		cin>>x;
		string s=f(x);
		a[i]=s;

	}
	sort(a+1,a+n+1);

	long long sum=15;

	for(int i=n; i>=n-m+1; i--) {
		sum&=j(a[i]);
	}

	cout<<sum;
	return 0;
}
