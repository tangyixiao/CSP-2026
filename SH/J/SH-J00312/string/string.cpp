#include <bits/stdc++.h>
using namespace std;

const int N=2e5+10;

long long n,len,nowl,sl,nowr,sr,ans;

struct stu{
	long long x; char c;
}a[N];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	scanf("%lld",&n);
	for(int i=1;i<=n;++i){
		cin >> a[i].x >> a[i].c;
		len+=a[i].x;
	}
	nowl=0; nowr=n+1;
	while(nowl<nowr){
		if(sl<=sr){
			++nowl;
			sl+=a[nowl].x;
		}
		else{
			--nowr;
			sr+=a[nowr].x;
		}
		if(nowl>=1&&nowr<=n && a[nowl].c!=a[nowr].c){
			long long s1=sl-a[nowl].x,t1=sl;
			long long s2=sr-a[nowr].x,t2=sr;
			ans+=min(t1,t2)-max(s1,s2);
		}
	}
	printf("%lld",ans);
	return 0;	
}
