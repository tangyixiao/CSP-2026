#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
namespace yyh{
	int n,a[200005];
	char c[200005];
	signed main(){
		cin>>n;
		for(int i=1;i<=n;i++)
			cin>>a[i]>>c[i];
		int l=1,r=n;
		int ans=0;
		while(l<=r){
			if(a[l]<=a[r]){
				ans+=(c[l]!=c[r])*a[l];
				a[r]-=a[l];
				l++;
			}else{
				ans+=(c[l]!=c[r])*a[r];
				a[l]-=a[r];
				r--;
			}
		}
		cout<<ans<<endl;
		return 0;
	}
}
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	yyh::main();
	cerr<<"Time: "<<(double)clock()<<"ms";
	return 0;
}
/*
饺子皮老师，我还记得你
一字一句把我拉进OI里 

g++ -std=c++14 -O2 -Wl,-stack=100000000 string.cpp -o string.exe
string.exe < string1.in > a.out
fc a.out string1.ans
string.exe < string2.in > a.out
fc a.out string2.ans
string.exe < string3.in > a.out
fc a.out string3.ans
string.exe < string4.in > a.out
fc a.out string4.ans
string.exe < string5.in > a.out
fc a.out string5.ans
string.exe < string6.in > a.out
fc a.out string6.ans

*/
