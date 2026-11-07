#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(ll numa,ll numb){
	return numa>numb;
}
ll a[1000001],b[1000001],n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	int l=1,r=n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int l=1;l<=n;l++){
		for(int i=l+1;i<=n;i++){
			int w=a[l]&a[i];
			b[i-1]=w;
		}
	}
	sort(b+1,b+1+n,cmp);
	cout<<b[1]<<endl;
	return 0;
}
