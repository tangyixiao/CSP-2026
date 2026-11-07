#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,m;
bool a[N][35],flag[N];
int b[N];
signed main(){
	freopen("and5.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		b[i]=x;
		int k=0;
		while(x){
			a[i][++k]=x%2;
			x/=2;
		}
//		for(int j=k;j>=k/2;j--){
//			int l=a[i][j];
//			a[i][j]=a[i][k-j+1];
//			a[i][k-j+1]=l;
//		}
//		for(int j=k;j>=1;j--)cout<<a[i][j];
//		cout<<"\n";
	}
	int res=0;
	for(int j=31;j>=1;j--){
		int cnt=0;
		for(int i=1;i<=n;i++){
			if(a[i][j]==1&&!flag[i])cnt++;
			if(cnt>=m)break;
		}
		if(cnt>=m){
			for(int i=1;i<=n;i++){
				if(a[i][j]==0){
					flag[i]=1;
				}
			}
		} 
	}
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(!flag[i]){
			cnt++;
			if(!res)res=b[i];
			else res&=b[i];
		}
	}
	cout<<res;
	return 0;
}