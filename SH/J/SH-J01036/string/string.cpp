#include <bits/stdc++.h>
using namespace std;
string s;
long long a[200005];
char b[200005];
int main(){
	freopen(string.in,"r",stdin);
	freopen(string.out,"o",stdout);
long long n;
cin>>n;
for(long long i=1;i<=n;i++){
	cin>>a[i]>>b[i];
	for(int l=1;l<=a[i];l++){
		s+=b[i];
	}
}
long long ans=0;
for(long long i=1;i<=s.size()/2;i++){
	if(s[i]!=s[s.size()-i]){
		s[i]=s[s.size()-i];
		ans++;
	}
}
cout<<ans;
	return 0;
}
