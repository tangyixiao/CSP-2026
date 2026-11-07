#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
const int N=2e5+5;
int n,m;
int a[N];
int maxn=INT_MIN;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			int num=a[i]&a[j];
//			cout<<num<<" ";
			maxn=max(maxn,num);
		}
	}
	cout<<maxn;
	return 0; 
} 
/*
4 2
3 15 12 12
*/
