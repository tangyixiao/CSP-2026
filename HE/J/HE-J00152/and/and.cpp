#include <bits/stdc++.h>
#define MAXN 10010
using namespace std;
const long long INF=0;
int n,m,a[MAXN],sum[MAXN];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int sum,cnt=INF;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cnt=a[i]&a[j];
			sum=max(cnt,sum);
		}
	}
	cout<<sum;
	return 0;
}
