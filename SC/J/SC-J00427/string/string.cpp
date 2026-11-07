#include<bits/stdc++.h>
using namespace std;
const long long N=2e5+5;
long long n,x,ans=0;
string s;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>x>>c;
		while(x--){
			s+=c;
		}
	}
	long long l=0,r=s.size();
	while(l<r){
		if(s[l]!=s[r])
			ans++;
		l++;
		r--;
	}
	cout<<ans;
	return 0;
}