#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	vector<long long> C,m;
	vector<char> S;
	C.push_back(0);
	S.push_back('0');
	m.push_back(0);
	for(long long i=1;i<=n;i++){
		long long c;
		char s;
		cin>>c>>s;
		C.push_back(c);
		S.push_back(s);
	}
	for(long long i=1;i<=n;i++){
		m.push_back(m[i-1]+C[i]);
	}
	long long ans=0;
	long long maxn=m[n]%2==0?m[n]/2:m[n]/2+1;
	for(long long i=n,j=1,r=m[n],l=0;r>=maxn;r--,l++){
		if(r<=m[i-1]) i-=1;
		if(l>=m[j]) j+=1;
		if(S[i]!=S[j]) ans++;
		cout<<ans<<' ';
	}
	cout<<ans;
	
	return 0;
}