#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define space putchar(' ');
#define enter putchar('\n');
using namespace std;
const int N=5e5+5,M=3e5+5;
ll read();
void write(ll x);
ll n,m,a[N],last[M],ans[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=read();
	m=read();
	for(int i=1;i<=n;i++){
		a[i]=read();
		last[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			ans[a[j]]++;
			if(last[a[j]]!=0) j=last[a[j]];
		}
	}
	for(int i=1;i<=m;i++){
		write(ans[i]);
		space;
	}
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
//100+100+100+[76,88]=[376,388]
//qingxiaozhexiangwogaobie
