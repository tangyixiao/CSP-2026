#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define space putchar(' ');
#define enter putchar('\n');
using namespace std;
const int N=2e5+5;
ll read();
void write(ll x);
int n;
char c[N];
ll siz[N],ans,tot,cnt_l,cnt_r;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    n=read();
    for(int i=1;i<=n;i++){
    	siz[i]=read();
    	c[i]=getchar();
    	tot+=siz[i];
	}
	ll j=n;
	for(int i=1;i<=n&&i<j;i++){
		while(siz[i]>=siz[j]&&i<j){
			cnt_r+=siz[j];
			if(c[i]!=c[j]) ans+=siz[j];
			siz[i]-=siz[j];
			siz[j]=0;
			j--;
		}
		if(siz[i]!=0&&siz[j]>siz[i]&&i<j){
			siz[j]-=siz[i];
			cnt_r+=siz[i];
			if(c[i]!=c[j]) ans+=siz[i];
			siz[i]=0;
		}
	}
	write(ans);
	return 0;
}
ll read(){
	int c;
	ll op=1,cnt=0;
	c=getchar();
	while(c<'0'||'9'<c){
		if(c=='-') op*=-1;
		c=getchar();
	}
	while('0'<=c&&c<='9'){
		cnt=cnt*10+c-'0';
		c=getchar();
	}
	return cnt*op;
}
void write(ll x){
	if(x<0){
		putchar('-');
		x=-x;
	}
	if(x>=10) write(x/10);
	putchar(x%10+'0');
}
