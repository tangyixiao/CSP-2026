#include<bits/stdc++.h>
using namespace std;
long long ans;
bool flag;
struct Node{
	long long len;
	char c;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	scanf("%lld",&n);
	string s="";
	for(int i=1;i<=n;i++){
		scanf("%lld %c",&a[i].len,&a[i].c);
		if(a[i].len*n>1000000000){
			flag=1;
		}
		if(!flag){
			for(int i=1;i<=a[i].len;i++){
				s+=a[i].c;
			}
		}
	}
	long long ans=0;
	if(!flag){
		long long l=s.size();
		for(int i=0;i<l;i++){
			if(s[i]!=s[l-1-i]){
				s[l-1-i]=s[i];
				ans++;
			}
		}
	}
	else{
		int w=0;
		for(int i=1;i<=n/2;i++){
			if(a[i].c!=a[n+1-i].c){
				ans+=a[i].len-w;
				w=abs(a[i].len-a[n+1-i].len-w);
			}
		}
	}
	printf("%lld",ans);
	return 0;
}
