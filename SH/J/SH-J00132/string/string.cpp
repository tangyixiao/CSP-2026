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
const i64 N=2e5+10;
i64 n,a[N],L,ans;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(i64 i=1;i<=n;i++)cin>>a[i]>>c[i],L+=a[i];
	L/=2;
	i64 id_1=1,cn_1=a[1],id_2=n,cn_2=a[n];
	while(id_1<id_2){
		if(c[id_1]!=c[id_2]){
			i64 v=min(cn_1,cn_2);
			ans+=v;
		}
		i64 v=min(cn_1,cn_2);
		cn_1-=v,cn_2-=v;
		if(cn_1==0)id_1++,cn_1=a[id_1];
		if(cn_2==0)id_2--,cn_2=a[id_2];
	}
	cout<<ans;
	return 0;
}
