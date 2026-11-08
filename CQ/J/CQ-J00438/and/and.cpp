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
}
using namespace fastIO;
namespace Logo{
	int n,m,a[200010],vis[200010],last;
	bool cnt[200010][35];
	signed main(){
		n=fastIO::Int_read();
		m=fastIO::Int_read();
		for(int i=1;i<=n;i++){
			a[i]=fastIO::Int_read(); 
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=33;j++){
				cnt[i][j]=a[i]%2;
				a[i]/=2;
			}
		}
		for(int i=33;i>=1;i--){
			int ans=0;
			for(int j=1;j<=n;j++){
				if(!vis[j]){
					if(cnt[j][i])ans++;
				}
			}
			if(ans>=m){
				last+=(1<<(i-1));
				for(int j=1;j<=n;j++){
					if(!vis[j]){
						if(!cnt[j][i])vis[j]=1;
					}
				}
			}
		}
		fastIO::Int_write(last);
		return 0;
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	Logo::main();
	return 0;
}
