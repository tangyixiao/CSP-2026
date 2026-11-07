#include<bits/stdc++.h>
using namespace std;
long long n;
long long ans;
struct node{
	long long a;
	char c;
};
node t[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(long long i=1;i<=n;i++){
		scanf("%lld%s",&t[i].a,&t[i].c);
	}
	long long p=1,q=n;
	while(p<q){
		if(t[p].a==0){
			p++;
		}
		if(t[q].a==0){
			q--;
		}
		if(t[p].c!=t[q].c&&p<q){
			ans++;
		}
		t[p].a--;
		t[q].a--;
	}
	printf("%lld",ans);
	return 0;
}
