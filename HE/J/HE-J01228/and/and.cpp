#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define space putchar(' ');
#define enter putchar('\n');
using namespace std;
const int N=2e5+5;
ll read();
void write(ll x);
queue<ll> win,q,q2;
ll ans,n,m,a[N];
bool flag[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    n=read();
    m=read();
    for(int i=1;i<=n;i++) a[i]=read();
    for(int i=1;i<=n;i++) q.push(i);
    for(ll o=30;o>=0;o--){
    	ll i=(1ll<<o);
		while(!q.empty()){
    		int now=q.front();
    		q.pop();
    		if(a[now]&i) win.push(now);
    		q2.push(now);
		}
		ll siz=(ll)win.size();
		if(siz>=m){
			while(!win.empty()){
			    q.push(win.front());
			    win.pop();
		    }
		    while(!q2.empty()) q2.pop();
		    flag[o]=true;
		}
		else{
			while(!q2.empty()){
				q.push(q2.front());
				q2.pop();
			}
			while(!win.empty()) win.pop();
			flag[o]=false;
		}
	}
	for(int i=0;i<=30;i++){
		ll cnt=(1ll<<i);
		if(flag[i]) ans+=cnt;
	}
	write(ans);
	return 0;
}
/*
4 2
3 15 12 12
*/
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
