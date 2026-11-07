#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10,M=3e5+10;
inline int read(){
	int w=0;char c=getchar();
	while(c<'0'||c>'9')c=getchar();
	while(c>='0'&&c<='9')w=w*10+c-'0',c=getchar();
	return w;
}
int n,m,h[N],as[M];
bool mp[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin.tie(0)->sync_with_stdio(0);
	n=read();m=read();
	for(int i=1;i<=n;i++){
		h[i]=read();
	}
	for(int i=1;i<=n;i++){
		memset(mp,0,m+2);
		for(int p=i;p<=n;p++){
			if(mp[h[p]]){
				for(int k=p-1;k>=i;k--){
					mp[h[k]]=0;
					if(h[k]==h[p])break;
				}
			}
			mp[h[p]]=1;
		}
		for(int i=1;i<=m;i++){
			if(mp[i])as[i]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<as[i]<<' ';
	}
	return 0;
}
