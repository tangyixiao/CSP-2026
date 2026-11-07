#include<bits/stdc++.h> 
using namespace std;
int n,m,a[200005],tot[200005];
	string b[200005];
#define int long long
bool cmp(string x,string y){
		return x>y;
	}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++) {
		int x=a[i];
		while(x){
			b[i][++tot[i]]=x%2;
			x/=2;
		}
		for(int j=1;j<=tot[i]/2;j++)swap(b[i][j],b[i][tot[i]-j+1]);
		sort(b+i,b+n+i,cmp);
	}
	cout<<"\n";
	return 0;
}
