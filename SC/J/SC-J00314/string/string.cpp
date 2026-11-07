#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e5+10;
int n;
long long p[MAXN],sum,f=1,b,q[MAXN];
long long s[MAXN],t=0;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		char c;
		cin>>p[i]>>c;
		b+=p[i];
		for(long long j=1;j<=p[i];j++){
			t++;
			s[t]=int(c);
		}
	}
	while(f!=b){
		if(s[f]!=s[b]){
			sum++;
		}
		f++;
		b--;
	}
	cout<<sum<<endl;
	return 0;
}