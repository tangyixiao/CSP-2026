#include<bits/stdc++.h>
#define int long long 
using namespace std;
namespace fastIO{
	inline int Int_read(){
		int opt=1,cnt=0;
		static char c=getchar();
		while(!isdigit(c)){
			if(c=='-')opt=-1;
			c=getchar();
		}
		while(isdigit(c)){
			cnt=(cnt<<3)+(cnt<<1)+(c^48);
			c=getchar();
		}
		return opt*cnt;
	}
	template<class _t> inline void Int_write(const _t &n){
		if(n<0){
			putchar('-');
			Int_write(-n);
			return;
		}
		if(n>9)Int_write(n/10);
		putchar(n%10+48);
	}
	inline char char_read(){
		char c=getchar();
		while(c==' '||c=='\n'||c=='\r'){
			c=getchar();
		}
		return c;
	}
}
namespace Logo{
	int n,a[200010],l,r,ans;
	char c[200010];
	signed main(){
		n=fastIO::Int_read();
		for(int i=1;i<=n;i++){
			a[i]=fastIO::Int_read();
			c[i]=fastIO::char_read();
		}
		l=1,r=n;
		while(l<r){
			int mid=min(a[l],a[r]);
			a[l]-=mid;
			a[r]-=mid;
			if(c[l]!=c[r]){
				ans+=mid;
			}
			if(!a[l])l++;
			if(!a[r])r--;
		}
		fastIO::Int_write(ans);
		return 0;
	}
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	Logo::main();
	return 0;
}
