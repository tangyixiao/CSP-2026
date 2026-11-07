#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
struct qp{
	int cnt;
	char c;
}f[N],l[N];
int len,ban,flen,tot;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>f[i].cnt>>f[i].c;
		len+=f[i].cnt;
	}
	for(int i=1;i<=n;i++){
		flen+=f[i].cnt;
		if(flen>len/2&&ban==0){
			if(len%2==0){
				ban=i;
				l[++tot]={f[i].cnt-flen+len/2,f[i].c};
				l[++tot]={flen-len/2,f[i].c};
			}
			else{
				ban=i;
				l[++tot]={f[i].cnt+len/2-flen,f[i].c};
				l[++tot]={flen-len/2-1,f[i].c};
			}
		}
		else{
			l[++tot]={f[i].cnt,f[i].c};
		}
	}
	int ans=0,ll=0,rr=0;
	for(int lf=1,rf=tot;lf<=ban;lf++){
		if(ll<rr){
			if(l[lf].c!=l[rf+1].c)ans+=min(rr-ll,l[lf].cnt);
			ll+=l[lf].cnt;
//			cout<<"TLE!!"<<" lf:"<<lf<<" rf:"<<rf<<'\n'<<"ll:"<<ll<<" rr:"<<rr<<" ans:"<<ans<<'\n';
			while(rr<ll){
				if(l[lf].c!=l[rf].c)ans+=min(ll-rr,l[rf].cnt);
				rr+=l[rf].cnt,rf--;
//				cout<<"TLE!!"<<" lf:"<<lf<<" rf:"<<rf<<'\n'<<"ll:"<<ll<<" rr:"<<rr<<" ans:"<<ans<<'\n';
			}
			continue;
		}
		ll+=l[lf].cnt;
		while(rr<ll){
			if(l[lf].c!=l[rf].c)ans+=min(ll-rr,l[rf].cnt);
			rr+=l[rf].cnt,rf--;
//			cout<<"TLE!!"<<" lf:"<<lf<<" rf:"<<rf<<'\n'<<"ll:"<<ll<<" rr:"<<rr<<" ans:"<<ans<<'\n';
		}
	}
	cout<<ans;
	return 0;
}
//string
//超级大模拟!!!
//2 32 52 代码好难调 
//2 21 16 还没调出来
//2 14 57 WA: 
//7
//1 a
//2 d
//3 c
//4 d
//2 c
//3 s
//1 a
//2 02 00 AC 期望100pts 