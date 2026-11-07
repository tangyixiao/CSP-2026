#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
const int maxn=2e5+10;
struct part{
	ull a;
	char c;
}p[maxn];
int n;
ull len,ans;
bool check(int l,int r){
	if(p[l].c!=p[r].c) return 0;
	else return 1;
}
void Sol(){
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		scanf("%llu %c",&p[i].a,&p[i].c);
		len+=p[i].a;
		p[i].a+=p[i-1].a;
	}
	int l=1,r=n;
	for(ull i=1;i<=len/2;++i){
		ull j=len+1-i;
		if(i>p[l].a) l++;
		if(j<=p[r-1].a) r--;
		if(!check(l,r)) ans++;
	}
	printf("%llu",ans);
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	Sol();
	return 0;
}