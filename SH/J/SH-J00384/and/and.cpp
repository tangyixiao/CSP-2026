#include<bits/stdc++.h>
#define FILE "and"
using namespace std;
const int N=200010;
int n,m,a[N],mx,lg;
bool ch[40],st[N];
bool cont(int n,int i){
	return (n|(1<<i))==n;
}
int main(){
	freopen(FILE".in","r",stdin);
	freopen(FILE".out","w",stdout);
	scanf("%d%d",&n,&m); 
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
		st[i]=true;
		mx=max(mx,a[i]);
	}
	while(mx){
		mx>>=1;
		lg++;
	}
	for(int i=lg-1;i>=0;--i){
		int cnt=0;
		for(int j=0;j<n;++j){
			if(st[j]&&cont(a[j],i)){
				cnt++;
			}
		}
		if(cnt>=m){
			ch[i]=true;
			for(int j=0;j<n;++j){
				if(!cont(a[j],i)){
					st[j]=false;
				}
			}
		}
	}
	int ans=0;
	for(int i=0;i<lg;++i){
		ans+=ch[i]*(1<<i);
	}
	printf("%d",ans);
	return 0;
}
