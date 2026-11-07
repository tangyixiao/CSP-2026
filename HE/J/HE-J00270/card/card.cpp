#include <bits/stdc++.h>
#define int long long
using namespace std;
inline int input();
void print(int x);
constexpr int N=5e5+1,M=3e5+1;
int a[N],vec[M],ans[M],is[M];
bool vis[M];
signed main(void){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n=input(),m=input();
	bool f=1;
	for (int i = 1;i<=n;i++){
		a[i]=input();
		if (a[i-1]>a[i]) f=0; 
	}
	for (int i = n;i>=1;i--) if (!is[a[i]]) is[a[i]]=i;
	if (f){
		for (int i = 1;i<=m;i++) print(is[i]),putchar(' ');
		return 0;
	}
	for (int i = 1;i<=n;i++){
		int l=1,r=1;
		for (int j = 1;j<=m;j++) vis[j]=0;
		for (int j = i;j<=n;j++){
			int k=a[j];
			if (!vis[k]){
				vec[r++]=k;
				vis[k]=1;
			}
			else{
				int q=r;
				for (int p = r-1;p>=l;p--){
					if (vec[p]==k){
						r=p+1;
						break;
					}
				}
				for (int p = r;p<q;p++) vis[vec[p]]=0;
			}
		}
		for (int j = 1;j<=m;j++) if (vis[j]) ++ans[j];
	}
	for (int i = 1;i<=m;i++) print(ans[i]),putchar(' ');
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
