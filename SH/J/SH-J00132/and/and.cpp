#include<bits/stdc++.h>
using namespace std;
typedef int i32;
typedef unsigned int u32;
typedef long long i64;
typedef unsigned long long u64;
typedef __int128 i128;
typedef float f32;
typedef double f64;
typedef long double f128;
#define endl '\n'
const i32 N=2e5+10;
i32 n,m,ans;
vector<i32> a,b;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(i32 i=1;i<=n;i++){
		i32 x;cin>>x;
		a.push_back(x);
	}
	for(i32 i=29;i>=0;i--){
		b.clear();
		for(i32 j=0;j<(i32)a.size();j++)
			if(a[j]&(1<<i))b.push_back(a[j]);
		if((i32)b.size()>=m){
			ans+=(1<<i);
			a.clear();
			for(i32 j=0;j<(i32)b.size();j++)a.push_back(b[j]);
		}
	}
	cout<<ans;
	return 0;
}
