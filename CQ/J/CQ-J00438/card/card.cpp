#include<bits/stdc++.h>
using namespace std;
namespace fastIO{
	inline int_fast64_t Int_read(){
		int_fast64_t opt=1,cnt=0;
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
}
using namespace fastIO;
namespace Logo{
	int n,m,a[500010],last[500010],vis[500010],siz[500010],ans[500010],prt[500010];
	signed main(){
		n=fastIO::Int_read();
		m=fastIO::Int_read();
		for(int i=1;i<=n;i++){
			a[i]=fastIO::Int_read();
		}
		for(int i=n;i>=1;i--){
			if(last[a[i]]==0){
				last[a[i]]=i;
				vis[i]=1;
				prt[i]=i+1;
			}else{
				prt[i]=last[a[i]];
				last[a[i]]=i;
			}
		}
		for(int i=1;i<=n;i++){
			siz[i]++;
			if(vis[i]){
				ans[a[i]]+=siz[i];
			}
			siz[prt[i]]+=siz[i];
		}
		for(int i=1;i<=m;i++){
			fastIO:Int_write(ans[i]);
			putchar(' ');
		}
		return 0;
	}
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	Logo::main();
	return 0;
}
