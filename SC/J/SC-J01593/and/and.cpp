#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long a[N];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	long long ans=a[1];
	for(int i=1;i<=m;i++){
		ans&=a[i];
//		cout<<ans<<endl;
	}
	cout<<ans;
}