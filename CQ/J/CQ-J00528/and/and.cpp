#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n,m;
long long a[N],b[N][40],c[40],f[40];
long long cmp(long long a,long long b){
	return a>b;
}
long long mi(long long x){
	long long ans=1,i=0;
	while(i<x){
		ans*=2;
		i++;
	}
	return ans;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long ans=1073741823;
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		long long s=a[i];
		while(s>0){
			int w=int(log2(s));
			b[i][w]=1;
			c[w]++;
			if(c[w]>=m){
				f[w]=1;
			}
			s-=mi(w);
		}
	}
	long long maxx=0;
	for(int i=31;i>=0;i--){
		ans=1073741823;
		if(f[i]){
			int ii=0;
			for(int j=1;j<=n;j++){
				if(ii>=m){
					break;
				}
				if(b[j][i]){
					ans&=a[j];
					ii++;
				}
			}
			maxx=max(maxx,ans);
		}
	}
	cout<<maxx<<"\n";
	return 0;
}
/*5 3
31 3 1 15 7*/
//把每个数拆成2进制，只有当M个位置都有时，才有值
//位数为高有值的，其值越大，优先找位数高的 
