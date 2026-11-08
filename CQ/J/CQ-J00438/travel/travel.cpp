#include<bits/stdc++.h>
using namespace std;
namespace fast{
	inline int_fast64_t fast_read(){
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
	template<class _t> inline void fast_write(const _t &n){
		if(n<0){
			putchar('-');
			fast_write(-n);
			return;
		}
		if(n>9)fast_write(n/10);
		putchar(n%10+48);
	}
}
namespace Logo{
	string c1,s1,c2,s2,ans="";
	signed main(){
		cin >> c1 >> s1 >> c2 >> s2;
		if(c1==c2){
			if(s1[0]==s2[0]&&s1[1]==s2[1]){
				if((s1[2]<='C'&&s1[2]>='A'&&s2[2]>='A'&&s2[2]<='C')||(s1[2]<='F'&&s1[2]>='D'&&s2[2]>='D'&&s2[2]<='F')){
					if((s1[2]=='A'&&s2[2]=='C')||(s1[2]=='C'&&s2[2]=='A'))ans="1110";
					else ans="1111";
				}else ans="1100";
			}else ans="1000";
		}else ans="0000";
		cout << ans << endl;
		return 0;
	}
}
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	Logo::main();
	return 0;
}
