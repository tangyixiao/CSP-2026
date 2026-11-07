#include<bits/stdc++.h>
#define ll long long
#define un unsigned long long
using namespace std;
ll read(){
	char c=getchar(),fu=0;
	while(c<'0' || c>'9'){
		if(c=='-'){
			fu=1;
		}
		c=getchar();
	}
	ll num=0;
	while((c>='0') && (c<='9')){
		num*=10;
		num+=(c-'0');
		c=getchar();
	}
	return fu?(-1)*num:num;
}
void out(ll num){
	if(num<0){
		putchar('-');
		num*=-1;
	}
	if(num>=10){
		out(num/10);
		putchar((num%10)+'0');
	}
	else{
		putchar(num+'0');
	}
	return ;
}
int n,m;
int a[500005],f[500005],ans[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=read(),m=read();
	for(int i=1;i<=n;i++){
		a[i]=read();
	}
	for(int i=1;i<=n;++i){
		int top=0;
		for(int j=i;j<=n;++j){
			for(int k=1;k<=top;k++){
				if(f[k]==a[j]){
					top=k-1;
					break;
				}
			}
			f[++top]=a[j];
		}
		for(int j=1;j<=top;++j){
			ans[f[j]]++;
		}
	}
	for(int i=1;i<=m;++i){
		out(ans[i]);
		putchar(' ');
	}
	putchar('\n');
}