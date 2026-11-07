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
}int lent,ret;
int itms[200010];
int valt[200010];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	lent=read();
	for(int i=1;i<=lent;i+=1){
		itms[i]=itms[i-1]+read();
		valt[i]=getchar();
	}int l=1,r=lent,p=0,q=0;
	while(l<=lent and r>=1){
		int x=itms[l]-itms[l-1]-p;
		int y=itms[r]-itms[r-1]-q;
		int z=min(x,y);
		if(valt[l]!=valt[r])ret+=z;
		x-=z;y-=z;p+=z;q+=z;
		if(!x)p=0,l+=1;
		if(!y)q=0,r-=1;
	}printf("%lld\n",ret/2);
	return 0;
}