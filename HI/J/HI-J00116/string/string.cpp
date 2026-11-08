#include<bits/stdc++.h>
using namespace std;
string s,m;
long long ans=0,cnt,n;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>cnt>>m;
		while(cnt--){
			s+=m;
		}
	}
	long long j=s.size()-1;
	for(long long i=0;i<=s.size()/2;i++){
		if(s[i]!=s[j]){
			ans++;
		}
		j--;
	}
	cout<<ans;
	return 0;
}

