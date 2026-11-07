#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,ans,cnt,x,y;
string s=" ",c;
int a;
signed main(){
	freopen("string1.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	while(n--){
		scanf("%lld",&a);cin>>c;
		while(a--) s+=c;
	} 
	int l=s.size();l--;
	for(int i=1;i<=l/2;i++){
		if(s[i]!=s[l-i+1]) ans++;
	}
	printf("%lld",ans);
	return 0;
}
/*#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,ans,cnt,x,y;
string s=" ";
struct star{
	int a;
	char c;
};
star g[N];
signed main(){
	freopen("string1.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	g[0].c='0';
	for(int i=1;i<=n;i++){
		cnt++;
		scanf("%lld",&g[cnt].a);cin>>g[cnt].c;
		if(g[cnt].c==g[cnt-1].c){
			g[cnt-1].a+=g[cnt].a;
			cnt--;
		} 
	}
	for(int i=1;i<=cnt/2;i++){
		if(x<=g[cnt-i+1].a)//去掉改了的部分 
			g[cnt-i+1].a-=x,x=0;
		else{
			x-=g[cnt-i+1].a;
			g[cnt-i+1].a=0;
			//continue;
		}
		if(y<=g[i].a) 
			g[i].a-=y,y=0;
		else{
			y-=g[i].a;
			g[i].a=0;
			//continue;
		}
		if(g[i].c!=g[cnt-i+1].c){
			ans+=min(g[i].a,g[cnt-i+1].a);
		}//符号不等 
		if(g[i].a!=g[cnt-i+1].a&&i*2!=cnt){
			if(g[i].a>g[cnt-i+1].a){
				if(g[cnt-i].c!=g[i].c) ans+=(g[i].a-g[cnt-i+1].a);//改多余的 
				x+=(g[i].a-g[cnt-i+1].a);//记录更改 
			}
			else{
				if(g[cnt-i+1].c!=g[i+1].c)ans+=(g[i+cnt-1].a-g[i].a);
				y+=(g[cnt-i+1].a-g[i].a);
			}
		}//长度不等且需要对齐 
	}
	printf("%lld",ans);
	return 0;
}*/