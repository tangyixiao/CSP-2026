#include<bits/stdc++.h>
#define int long long
using namespace std;
namespace T2{
	const int MAXN=2e5+5;
	int N;
	int a[MAXN];
	char c[MAXN];
	signed main(){
		freopen("string.in","r",stdin);
		freopen("string.out","w",stdout);
		ios::sync_with_stdio(0);
		cin.tie(0);cout.tie(0);
		cin>>N;
		for(int i=1;i<=N;i++)cin>>a[i]>>c[i];
		int L=1,R=N,Ans=0,tL=a[1],tR=a[N];
		while(L<=R&&L<=N&&R>=1){
			if(c[L]==c[R]){
				if(tL<tR){
					tR-=tL;
					tL=a[++L];
				}else if(tL>tR){
					tL-=tR;
					tR=a[--R];
				}else if(tL==tR){
					tL=a[++L];
					tR=a[--R];
				}
			}else{
				Ans+=min(tL,tR);
				if(tL<tR){
					tR-=tL;
					tL=a[++L];
				}else if(tL>tR){
					tL-=tR;
					tR=a[--R];
				}else if(tL==tR){
					tL=a[++L];
					tR=a[--R];
				}
			}
		}
		cout<<Ans;
		return 0;
	}
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	T2::main();
	return 0;
}
//内存：2352KB
//时间：O(N)
//预估分数：100pts 
