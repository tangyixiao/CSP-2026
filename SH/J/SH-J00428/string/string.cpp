#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
long long n,a[MAXN],gcda,ans,k;
char c[MAXN];
string s;
int gcd(long long a,long long b){
	if(b==0)
		return a;
	else
		return gcd(min(a,b),max(a,b)%min(a,b));
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>c[i];
	gcda=gcd(a[1],a[2]);
	for(int i=2;i<n;i++)
		gcda=gcd(gcda,a[i+1]);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=(a[i]/gcda);j++)
			s+=c[i];
	k=s.size();
	for(int i=0;i<k/2;i++){
		if(s[i]!=s[k-i-1])
			ans++;
	}
	cout<<ans*gcda;
	return 0;
}
