#include<bits/stdc++.h>
using namespace std;
string s;
long long n,tot=1,ans=0;
struct node{
	long long a;
	char c;
}nd[20010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	scanf("%lld %c",&nd[1].a,&nd[1].c);
	for(int i=2;i<=n;i++){
		long long aa;
		char cc;
		scanf("%lld %c",&aa,&cc);
		if(cc==nd[tot].c) nd[tot].a+=aa;
		else{
			nd[++tot].a=aa;
			nd[tot].c=cc;
		}
	}
	for(int i=1;i<=tot;i++){
		if(nd[i].c!=nd[tot-i+1].c){
			char nc=nd[i].c;
			long long na=nd[i].a;
			if(na<nd[tot-i+1].a){
				nd[tot-i+1].a-=na;
				nd[++tot-i+1].a=na;
				nd[tot-i+1].c=nc;
				ans+=nd[i].a;
			}
			else if(na==nd[tot-i+1].a){
				nd[tot-i+1].c=nc;
				ans+=nd[tot-i+1].a;
			}
			else{
				long long zh=na;
				nd[tot-i+1].c=nd[i].c;
				zh-=nd[tot-i+1].a;
				long long j=1;
				while(zh>=nd[tot-i+1-j].a){
					if(nc==nd[tot-i+1-j].c){
						zh-=nd[tot-i+1-j].a;
						nd[tot-i+1-j].a+=nd[tot-i-j].a;
						tot--;
					}
					else{
						zh-=nd[tot-i+1-j].a;
						nd[tot-i+1-j].a+=nd[tot-i-j].a;
						nd[tot-i+1-j].c=nc;
						tot--;
					}
					j++;
				}
				nd[tot-i].a-=zh;
				nd[tot-i+1].a+=zh;
				ans+=nd[tot-i+1].a;
			}
		}
	}
	printf("%lld",ans);
	return 0;
}