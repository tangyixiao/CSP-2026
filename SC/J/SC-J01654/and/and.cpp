#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

static inline int read(){
	int res=0,f=1;char c=getchar();
	while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
	while(c>='0'&&c<='9') res=(res<<3)+(res<<1)+c-'0',c=getchar();
	return res*f;
}

static inline void write(int x){
	if(x<0) x=-x,putchar('-');
	if(x>9) write(x/10);
	putchar(x%10+'0');
}

const int N=2e5+5;

int n,m;
int ans=0;
vector<int> a;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	n=read(),m=read();
	for(int i=1;i<=n;++i) a.push_back(read());
	
	for(int j=30;j>=0;--j){
		vector<int> ne;
		int cnt=0;
		for(const int &ft:a){
			if((ft>>j)&1) cnt++,ne.push_back(ft);
		}if(cnt>=m){
			ans+=(1<<j);
			a=ne;
		}
	}
	
	write(ans);putchar('\n');
	
	return 0;
}
//while(1) rp++;