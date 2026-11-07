#include<bits/stdc++.h>
#define int long long
#define cin std::cin
#define cout std::cout
#define endl '\n'
using namespace std;
const int maxn=5e5+5;
const int maxm=3e5+5;
const int maxa=5e3+5;
int n,m,a[maxa],ans[maxa];
int st[maxa],pos[maxn],cnt;
void init(){
	memset(ans,0,sizeof(ans));
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	init();
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		memset(pos,0,sizeof(pos)); cnt=0;
		for(int j=i;j<=n;j++){
			if(pos[a[j]]){ // have
				while(st[cnt]!=a[j]) pos[st[cnt--]]=0;
			}else{ // no
				st[++cnt]=a[j],pos[a[j]]=j;
			}
		}
		for(int i=1;i<=m;i++)
		if(pos[i]!=0) ans[i]++;
	}
	cout<<ans[1];
	for(int i=2;i<=m;i++) cout<<" "<<ans[i];
	cout<<endl;
	return 0;
}
/*
T1:
提交时间：10-31 08:48:53
代码长度：669 字节
T2:
提交时间：10-31 09:23:06
代码长度：631 字节
T3:
提交时间：10-31 11:07:42
代码长度：2013 字节
一等喽，美滋滋
T4:
提交时间：10-31 11:41:03
代码长度：1029 字节
*/