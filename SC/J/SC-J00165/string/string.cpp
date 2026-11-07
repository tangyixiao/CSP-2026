#include<bits/stdc++.h>
using namespace std;
long long a[200010];
char c[200010];
struct P{
	long long begin,end;
	char s;
}l[200010],r[200010];
int ll,rr;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long len=0;
	int cnt=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if(c[i]==c[i-1]){
			a[i-1]+=a[i];
			i--;
			n--;
		}else{
			cnt++;
		}
		len+=a[i];
	}
	long long s=0;
	int k=0;
	bool flag=0;
	for(int i=1;i<=cnt&&s+a[i]<=len/2;i++){
		if(s+1<=len/2&&s+a[i]>=len/2+1){
			flag=1;
			k=i;
			break;
		}l[++ll]={s+1,s+a[i],c[i]};
		if(s+a[i]==len/2||s+1==len/2+1){
			k=i;
			break;
		}
		s+=a[i];
	}long long ss=0;
	rr=0;
	for(int i=cnt;i>k;i--){
		rr++;
		r[rr]={ss+1,ss+a[i],c[i]};
		ss+=a[i];
	}
	if(!flag){
		rr++;
		r[rr]={ss+1,ss+a[k],c[k]};
	}
	int L=1,R=1;
	long long h=0;
	long long ans=0;
	while(L<=ll&&R<=rr){
		long long le=l[L].end,re=r[R].end;
		if(l[L].s!=r[R].s){
			ans+=min(le,re)-h;
		}
		h=min(le,re);
		if(le>re){
			R++;
		}else{
			L++;
		}
	}
	if(flag){
		long long sss=0;
		for(int i=1;i<=k;i++){
			sss+=a[i]; 
		}
		int lll=len/2-sss;
		int rrr=sss-len/2-1;
		ans+=abs(lll-rrr);
	}cout<<ans;
	return 0;
}
/*
6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
3
2 a
2 b
1 c

*/