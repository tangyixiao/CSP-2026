#include <bits/stdc++.h>
using namespace std;
long long n,a,m,ans=0;
char c;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(long long i=1;i<=n;i++){
		scanf("%lld %c",&a,&c);
		while(a--){
			s+=c;
		}
	}
	m=s.size()-1;
	for(long long l=0,r=m;l<=r;l++,r--){
		if(s[l]!=s[r]){
			ans++;
		}
	}
	printf("%lld",ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
