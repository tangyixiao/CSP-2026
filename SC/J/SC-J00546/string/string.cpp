// 2.string
// Done-
#include<bits/stdc++.h>
using namespace std;

long long n,l=0,cnt=0;
vector<long long> a;vector<char> c;

char si(int i){
	long long t=0,p=1;
	while(1){
		if(t+a[p]>=i){
			// cout<<"(debug["<<p<<"])";
			return c[p];
		}else{
			t+=a[p++];
		}
	}
}

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	a.resize(n+2);c.resize(n+2);
	for(int i=1;i<=n;i++){
		scanf("%lld %c",&a[i],&c[i]);
		l+=a[i];
	}
	for(int i=1;i<=(l>>1);i++){
		if(si(i)!=si(l+1-i)){
			cnt++;
		}
	}
	printf("%lld",cnt);
	return 0;
}
