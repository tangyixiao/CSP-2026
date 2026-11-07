#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef unsigned long long llu;
const int mod=1000000007;
inline int read(){
	int ret=0;bool opt=0;char in=getchar();
	while(!isdigit(in)){opt|=(in=='-');in=getchar();}
	while(isdigit(in)){ret=ret*10+(in^48);in=getchar();}
	return (opt?-ret:ret);
}
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string p,q,m,n;
	cin>>p>>m>>q>>n;
	if(p!=q){printf("0000");return 0;}
	printf("1");
	if(m[0]!=n[0] or m[1]!=n[1]){printf("000");return 0;}
	printf("1");
	if((m[2]<'D')^(n[2]<'D')){printf("00");return 0;}
	printf("1");
	if(abs(m[2]-n[2])!=1){printf("0");return 0;}
	printf("1");
	return 0;
}