#include <bits/stdc++.h>
using namespace std;
long long n,ans,m;
unsigned long long a[100000001];
char c[1001];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(long long i=0;i<n;i++){
		scanf("%lld",&a[i]);
		cin>>c[i];
		m+=a[i];
		for(long long j=m-a[i];j<m;j++){
			s[j]=c[i];
		}
	}
	for(long long i=0,j=m-1;j>=m/2;i++,j--){
		if(s[i]!=s[j]){
			s[j]=s[i];
			ans++;
		}
	}
	cout<<ans;
	return 0;
}