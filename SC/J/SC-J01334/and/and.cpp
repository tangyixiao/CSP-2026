#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,a[200005],f[200005][33],x=0,q=0,len;
int bj[200005],ans[33];
inline int read(){
	int x=0,f=1;
	char ch=getchar();
	while(ch<'0' || ch>'9'){
		if(ch=='-'){
			f=-1;
		}
		ch=getchar();
	}
	while(ch>='0' && ch<='9'){
		x=x*10+ch-'0';
		ch=getchar();
	}
	return x*f;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	n=read();
	m=read();
	for(int i=1;i<=n;i++) a[i]=read();
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		q=0;
		x=a[i];
		while(x){
			f[i][++q]=x%2;
			x/=2;
		}
	}
	len=n;
	for(int i=31;i>=1;i--){
		q=0;
		if(len==m) break;
		for(int j=1;j<=n;j++){
			if(bj[j]) continue;
			if(f[j][i]) q++;
		}
		if(q<m) continue;
		for(int j=1;j<=n;j++){
			if(bj[j]) continue;
			if(!f[j][i]){
				len--;
				bj[j]=1;
			}
		}
	}
	for(int i=1;i<=31;i++) ans[i]=1;
	long long cnt=0;
	for(int i=1;i<=n;i++){
		if(cnt==m) break;
		if(bj[i]) continue;
		cnt++;
		for(int j=1;j<=31;j++){
			if(!f[i][j]) ans[j]=0;
		}
	}
	cnt=1;
	long long res=0;
	for(int i=1;i<=31;i++){
		res+=(ans[i]*cnt);
		cnt*=2;
	}
	cout<<res;
	return 0;
}