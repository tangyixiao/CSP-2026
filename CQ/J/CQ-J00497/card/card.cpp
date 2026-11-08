#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
namespace yyh{
	int n,m,a[500005],la[500005],d[500005],cnt[500005],f[500005];
	void add(int x,int c){
		d[x]+=c,d[la[a[x]]]-=c;
	}
	signed main(){
		cin>>n>>m;
		for(int i=1;i<=n;i++)cin>>a[i],la[a[i]]=i;
		for(int i=1;i<=n;i++)f[i]++,f[la[a[i]]+1]+=f[i];
		for(int i=1;i<=n;i++)add(i,f[i]);
		for(int i=1;i<=n;i++)d[i]+=d[i-1];
		for(int i=1;i<=m;i++)cout<<la[i]-d[la[i]]<<' ';
		cout<<endl;
		return 0;
	}
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	yyh::main();
	cerr<<"Time: "<<(double)clock()<<"ms";
	return 0;
}
/*
饺子皮老师，我还记得你
一字一句把我拉进OI里 

g++ -std=c++14 -O2 -Wl,-stack=100000000 card.cpp -o card.exe
card.exe < card1.in > a.out
fc a.out card1.ans /w
card.exe < card2.in > a.out
fc a.out card2.ans /w
card.exe < card3.in > a.out
fc a.out card3.ans /w
card.exe < card4.in > a.out
fc a.out card4.ans /w
card.exe < card5.in > a.out
fc a.out card5.ans /w
card.exe < card6.in > a.out
fc a.out card6.ans /w

10 3
3 1 2 1 3 2 3 1 2 1

*/
