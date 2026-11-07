#include <bits/stdc++.h>
using namespace std;


const int N=200005;
inline int read(){
	int x=0,f=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){
		if(ch=='-'){
			f=~f+1;
		}
		ch=getchar();
	}
	while(ch>='0'&&ch<='9'){
		x=x*10+ch-'0';
		ch=getchar();
	}
	return x*f;
}
inline void write(int u){
	if(u>=10){
		write(u/10);
	}
	putchar(u%10+'0');
	return ;
}
stack<int> stk;
int instk[N],a[N];
int zhan[N],toop;
unsigned long long ans[N];
bool xza=true;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	n=read();
	m=read();
	for(int i=1;i<=n;i++){
		a[i]=read();
		if(a[i]<a[i-1]){
			xza=false;
		}
	}
	if(false)
	if(xza){
		for(int i=1;i<=n;i++){
			if(a[i]!=a[i+1]){
				zhan[++toop]=i+1;
			}
		}
		for(int i=toop;i>=1;i--){
			write(zhan[i]);
			putchar(' ');
		}
		putchar('\n');
		return 0;
	}
	if(m<=2){
		int num1=0,num2=0;
		for(int i=1;i<=n;i++){
			 if(a[i]==1){
			 	num1++;
			 } else if(a[i]==2){
			 	num2++;
			 }
		}
		if(a[n]==1){
			write(n);
			putchar(' ');
			write(num2);
			putchar('\n');
			
		} else {
			write(num1);
			putchar(' ');
			write(n);
			putchar('\n'); 
		}
		return 0;
	} 
	for(int i=1;i<=n;i++){
		memset(instk,0,sizeof(instk));
		while(!stk.empty()){
			stk.pop();
		}
		for(int j=i;j<=n;j++){
			while(instk[a[j]]){
				int tp=stk.top();
				instk[tp]=0;
				stk.pop();
			}
			stk.push(a[j]);
			instk[a[j]]=1;
		}
		for(int j=1;j<=m;j++){
			if(instk[j]==1){
				ans[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		write(ans[i]);
		putchar(' ');
	}
	putchar('\n');
	return 0;
}
