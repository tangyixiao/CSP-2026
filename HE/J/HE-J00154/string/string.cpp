#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5+100;
ll n;
ll a[N];
ll il,ir;
ll ans=0;
char b[N]; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
//		cout<<a[i]<<"---"<<b[i]<<"\n";
	}
	il = 1;
	ir = n;
	while(il<ir){
		if(b[il] != b[ir]){
			ans += min(a[il],a[ir]);
			
		}
		if(a[il] < a[ir]){
			a[ir] -= a[il];
			a[il] = 0;
			il+=1;
		}else{
			a[il] -= a[ir];
			a[ir] = 0;
			ir-=1;
		}
	}
	cout<<ans;
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
*/
