#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+3;
int n,a[N],sum[N],cnt;
int x,y,mid;
char c,s[N];
signed main(){
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c;
		sum[i]=sum[i-1]+a[i];
	}
	if(sum[n]%2==1){
		for(int i=1;i<=n;i++){
			if(sum[n]/2+1<=sum[i]){
				x=i-1,y=i;
				break;
			}
		}
		mid=sum[n]/2+1;
		if(mid-sum[x]<sum[y]-mid){
			if(c[x+1]!=c[y]){
			}
			x--;
		}
	}
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
