#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=5e5+10;
int read(){
	int res=0,f=1;
	char ch=getchar();
	while(ch<'0' || ch>'9'){
		if(ch=='-') f=-1;
		ch=getchar();
	}
	while(ch>='0' && ch<='9'){
		res=(res<<1)+(res<<3)+(ch^48);
		ch=getchar();
	}
	return res*f;
}
void write(int x){
	if(x<0) putchar('-'),x=-x;
	if(x>9) write(x/10);
	putchar((x%10)^48);
}
int a[N],n,m,cnt[N];
struct abc{
	int val,pos;
}last[N];
bool cmp(abc u,abc v){
	return u.pos<v.pos;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	n=read(),m=read();
	for(int i=1;i<=n;i++){
		a[i]=read();
		last[a[i]]={a[i],i};
		cnt[a[i]]++;
	}
	sort(last+1,last+1+m,cmp);
	for(int i=1;i<m;i++){
		int k=last[i].pos+1;
		cnt[a[k]]+=cnt[last[i].val];
	}
	for(int i=1;i<=m;i++){
		write(cnt[i]);
		putchar(' ');
	}
	return 0;
}
