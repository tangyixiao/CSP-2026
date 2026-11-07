#include<bits/stdc++.h>
using namespace std;
const int H=2e5+10;
int n,ch[H*31][2],ed[H*31],m,cnt=0;
inline int read(){
	int w=0;char c=getchar();
	while(c<'0'||c>'9')c=getchar();
	while(c>='0'&&c<='9'){
		w=w*10+c-'0';c=getchar();
	}
	return w;
}
void insert(int u){
	int p=0;
	for(int i=30;i>=0;i--){
		int t=u>>i&1;
		if(ch[p][t])p=ch[p][t];
		else{
			++cnt;
			ch[p][t]=cnt;
			p=cnt;
		}
	}
	ed[p]++;
}
int ans=0,fg=0;
void fd(int p,int rd){
	if(ed[p]){
		if((ans&rd)==ans)
		fg+=ed[p];
		return;
	}
	if(ch[p][0]){
		fd(ch[p][0],rd<<1);
	}
	if(ch[p][1]){
		fd(ch[p][1],(rd<<1)+1);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	n=read();m=read();
	for(int i=1;i<=n;i++){
		int u=read();
		insert(u);
	}
	int p=0;
	for(int i=30;i>=0;i--){
		ans|=(1<<i);
		fd(0,0);
		if(fg<m){
			ans^=(1<<i);
		}
		fg=0;
	}
	cout<<ans;
	return 0;
}

