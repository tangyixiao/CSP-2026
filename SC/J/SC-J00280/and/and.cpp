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
int n,m,ans;
int a[200005];
bool A(){
	for(int i=1;i<=n;i++){
		bool b=0;
		for(int k=1;k<=30;k++){
			if(a[i]==((1<<k)-1)){
				b=1;
			}
		}
		if(b==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	n=read();
	m=read();
	for(int i=1;i<=n;++i){
		a[i]=read();
	}
	sort(a+1,a+n+1);
	if(n<=2000 && m==1){
		out(a[n]);
	}
	else if(n<=2000 && m==n){
		ans=a[1];
		for(int i=2;i<=n;++i){
			ans=(ans&a[i]);
		}
		out(ans); 
	}
	else if(n<=2000 && m==2){
		ans=-1;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,(a[i]&a[j]));
			}
		}
		out(ans);
	}
	else if(A()){
		out(a[n-m+1]);
	}
	else{
		out(0); 
	}
	return 0;
}