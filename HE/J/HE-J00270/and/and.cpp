#include <bits/stdc++.h>
#define int long long
using namespace std;
inline int input();
void print(int x);
constexpr int N=2e5+1;
int n,m,a[N],ans,k;
void dfs(int i,int sum,int x){
	if (sum==m){
		if (x>ans) ans=x;
		return;
	}
	if (i>n) return;
	dfs(i+1,sum+1,x&a[i+1]);
	dfs(i+1,sum,x);
}
inline bool check(int x){
	for (int i = 0;;i++){
		if ((1ll<<i)==x) return 1;
		else if ((1ll<<i)>x) return 0;
	}
}
signed main(void){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	n=input(),m=input();
	bool f=1,flag=1;
	for (int i = 1;i<=n;i++){
		a[i]=input();
		ans=max(ans,a[i]);
		if (i==1) k=a[i];
		else k&=a[i];
		if (a[i]!=i-1) f=0;
		if (!check(a[i]+1)) flag=0;
	}
	if (flag){
		sort(a+1,a+n+1);
		print(a[n-m+1]);
		return 0;
	}
	if (check(n)&&f){
		ans=a[n];
		for (int i = n-1;i>=n-m+1;i--) ans&=a[i];
		print(ans);
		return 0;
	}
	if (m==1){
		print(ans);
		return 0;
	}
	else ans=0;
	if (m==n){
		print(k);
		return 0;
	}
	for (int i = 1;i<=n-m+1;i++) dfs(i,1,a[i]);
	print(ans);
	return 0;
}
inline int input(){
	int x=0,f=1;
	char c=getchar();
	while (!isdigit(c)){
		if (c=='-') f=-1;
		c=getchar();
	}
	while (isdigit(c)){
		x=x*10+c-'0';
		c=getchar();
	}
	return x*f;
}
void print(int x){
	if (x<0){
		putchar('-');
		x=-x;
	}
	if (x<10) putchar(x+'0');
	else{
		print(x/10);
		putchar(x%10+'0');
	}
}
