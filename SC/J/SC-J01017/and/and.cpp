#include<bits/stdc++.h>
using namespace std;
long long n,m,num[200005],ans;
struct tree{
	long long cnt,w[200005];
}tr[30];
long long read(){
	long long num=0;
	char a;
	a=getchar();
	while('0'<=a&&a<='9'){
		num=num*10+a-'0';
		a=getchar();
	}
	return num;
}
void write(long long a){
	if(a>9){
		write(a/10);
	}
	putchar(a%10+'0');
}
long long wzc(long long v){
	return v&-v;
}
void update(int x){
	for(int i=x;i>=1;i-=wzc(i)){
		int l=log2(wzc(i));
		tr[l].cnt++;
		tr[l].w[tr[l].cnt]=x;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	n=read();
	m=read();
	for(int i=1;i<=30;i++){
		tr[i].cnt=0;
	}
	for(int i=1;i<=n;i++){
		num[i]=read();
	}
	sort(num+1,num+1+n);
	for(int i=n;i>=1;i--){
		update(num[i]);
	}
	for(int i=30;i>=1;i--){
		if(tr[i].cnt==m){
			ans=tr[i].w[m];
			while(m){
				m--;
				ans=ans&tr[i].w[m];
			}
			break;
		}else if(tr[i].cnt>=m){
			ans=tr[i].w[1];
			for(int i=1;i<=m;i++){
				ans=ans&tr[i].w[i];
			}
			break;
		}
	}
	printf("%lld",ans);
	return 0;
}