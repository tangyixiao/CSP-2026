#include<bits/stdc++.h>
using namespace std;
long long n,a[200010];
string s[200010];
string g,z;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
    cin>>n;
    for(long long i=1;i<=n;i++){
    	cin>>a[i];
    	cin>>s[i];
	}
	for(long long i=1;i<=n;i++){
		for(long long j=1;j<=a[i];j++){
			g+=s[i];
			z+=s[i];
		}
	}
	long long sam,cnt=0;
	sam=g.size();
	sam/=2;
	reverse(z.begin(),z.end());
	for(long long i=0;i<sam;i++){
		if(g[i]!=z[i]){
			g[i]=z[i];
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
