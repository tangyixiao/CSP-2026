#include<bits/stdc++.h>
using namespace std;
const int N=5e5+3;
typedef long long ll;
int n,m;
int a[N];
int cnt[N];
inline ll read(){
	ll x=0,f=1;
	char c=getchar();
	while(c<'0'||c>'9'){
		if(c=='-') f=-1;
		c=getchar();
	}
	while(c>='0'&&c<='9'){
		x=x*10+(c-'0');
		c=getchar();
	}
	return x*f;
}
inline void write(ll x){
	if(x<0){
		putchar('-');
		x=-x;
	}
	if(x>9) write(x/10);
	putchar(x%10+'0');
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=read();m=read();
	for(int i=1;i<=n;i++) a[i]=read();
	for(int i=1;i<=n;i++){
		deque<int> zm;
		unordered_map<int,int> p;
		for(int j=i;j<=n;j++){
			if(p.empty()){
				p[a[j]]++;
				zm.push_back(a[j]);
			}else{
				if(p.count(a[j])){
					int t=zm.back();
					while(t!=a[j]){
						if(p[t]==1) p.erase(t);
						else p[t]--;
						zm.pop_back();
						t=zm.back();
					}
					zm.pop_back();
					if(p[a[j]]==1) p.erase(a[j]);
					else p[a[j]]--;
				}
				p[a[j]]++;
				zm.push_back(a[j]);
			}
		}
		while(!zm.empty()){
			int t=zm.front();
			cnt[t]++;
			zm.pop_front();
		}
	}
	for(int i=1;i<=m;i++){
		write(cnt[i]);
		putchar(' ');
	}
	return 0;
}
