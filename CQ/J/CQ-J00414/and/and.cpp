#include <iostream>
using namespace std;
const int N=2e5+10;
int n,m;
int a[N],flag[N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int maxn=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans=0;
	for(int i=30;i>=0;i--){
		int x1=(1<<i);
		ans=ans+x1;
		int sum=0;
		for(int j=1;j<=n;j++){
			if((a[j]&ans)==ans) sum++;
		}
		if(sum<m) ans-=x1;
	}
	cout<<ans;
	return 0;
}
/*
5 3
31 3 1 15 7

4 2
3 15 12 12

*/
