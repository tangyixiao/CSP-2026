#include<bits/stdc++.h>
using namespace std;
int n,m,ans[100005];
bool c[100005];
int a[200005];
void init(){
	for(int i=1;i<=m;i++){
		c[i]=false;
	}
}
inline int read(){
	int x=0,f=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){
		if(ch=='-')f=-1;
		ch=getchar();
	}
	while(ch>='0'&&ch<='9'){
		x=x*10+ch-'0';
		ch=getchar();
	}
	return x*f;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=read();
	m=read();
	for(int i=1;i<=n;i++){
		a[i]=read();
	}
	for(int T=1;T<=n;T++){
		init();
		stack<int> s;
		for(int i=T;i<=n;i++){
			if(c[a[i]]==0){
				c[a[i]]=true;
				s.push(a[i]);
			}
			else{
				while(s.top()!=a[i]&&(!s.empty())){
					c[s.top()]=false; 
					s.pop();
				}
				s.push(a[i]);
				c[a[i]]=true;
			}
		}
		for(int i=1;i<=m;i++){
			if(c[i])ans[i]++;
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
	return 0;
} 
