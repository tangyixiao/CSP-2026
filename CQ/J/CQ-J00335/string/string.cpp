#include<bits/stdc++.h>
using namespace std;
long long n,cnt;
long long m;
string v,s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin>>n;
	for(long long i=0;i<n;++i){
		cin>>m>>v;
		for(long long j=0;j<m;++j){
			s+=v;
		}
	}
	n=s.size();
	for(long long i=0;i<n;++i){
		if(s[i]!=s[n-i-1]){
			s[n-i-1]=s[i];
			++cnt;
		}
	}
	cout<<cnt;
	return 0;
}

