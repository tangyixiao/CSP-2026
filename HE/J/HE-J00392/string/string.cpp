#include<bits/stdc++.h>
using namespace std;
long long n;
long long a;
char c;
string s;
long long cnt=0;
long long ans=0;
void hwc(string s,long long cd){
	long long ccd=cd;
	cd=cd/2;
	for(long long i=0;i<cd;i++){
		if(s[i]!=s[ccd-i-1]){
			ans++;
		}
	}
	cout<<ans<<'\n';
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a;
		cin>>c;
		for(long long j=1;j<=a;j++){
			s+=c;
			cnt++;
		}
	}
	hwc(s,cnt);
	return 0;
}
