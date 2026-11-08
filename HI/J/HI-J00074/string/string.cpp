#include<bits/stdc++.h>
using namespace std;
long long n,a,sum=0;
string m="",b;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld%lld",&a,&b);
		for(int j=1;j<=a;j++) m+=b;
	}
	string w="";
	for(long long i=m.size()-1;i>=0;i--) w+=m[i];
	for(long long i=0;i<m.size();i++){
		if(m[i]!=w[i]) sum++;
	}
	printf("%lld",sum/2);
	return 0;
}
