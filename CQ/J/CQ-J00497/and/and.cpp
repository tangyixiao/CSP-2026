#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
namespace yyh{
	int n,m,a[200005];
	bool v[200005];
	signed main(){
		cin>>n>>m;
		for(int i=1;i<=n;i++)
			cin>>a[i],v[i]=1;
		int ans=0;
		for(int i=30;i>=0;i--){
			int cnt=0;
			for(int j=1;j<=n;j++)
				if(v[j]&&(a[j]&(1ll<<i)))cnt++;
			if(cnt>=m){
				ans+=(1ll<<i);
				for(int j=1;j<=n;j++)
					if(v[j]&&!(a[j]&(1ll<<i)))v[j]=0;
			}
		}
		cout<<ans<<endl;
		return 0;
	}
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	yyh::main();
	cerr<<"Time: "<<(double)clock()<<"ms";
	return 0;
}
/*
饺子皮老师，我还记得你
一字一句把我拉进OI里 

g++ -std=c++14 -O2 -Wl,-stack=100000000 and.cpp -o and.exe
and.exe < and1.in > a.out
fc a.out and1.ans
and.exe < and2.in > a.out
fc a.out and2.ans
and.exe < and3.in > a.out
fc a.out and3.ans
and.exe < and4.in > a.out
fc a.out and4.ans
and.exe < and5.in > a.out
fc a.out and5.ans

*/
