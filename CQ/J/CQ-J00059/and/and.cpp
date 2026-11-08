#include <bits/stdc++.h>
using namespace std;
struct S{
	int o;
	bitset<64> b;
}a[100005];
bool cmp(S x,S y){
	if(x.b.count()!=y.b.count())return x.b.count()>y.b.count();
	else return x.o>y.o;
}
int main(){
	freopen("and","r",stdin);
	freopen("and","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a[i].o=x;
		a[i].b=x;
		
	}
	sort(a,a+n,cmp);
	int ans=a[0].o;
	for(int i=0;i<m;i++){
		ans=ans&a[i].o;
	}
	cout<<ans;
	return 0;
} 
