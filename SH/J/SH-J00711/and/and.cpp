#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n,m;
long long ans=2147483647;
struct node{
	long long x,$=0;
}a[200001];
bool cmp(node x,node y){
	if(x.$!=y.$){
		return x.$>y.$;
	}
	else{
		return x.x>y.x;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i].x;
		int $x=a[i].x;
		while($x!=0){
			a[i].$+=$x%2;
			$x/=2;
		}
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=m;i++){
		ans&=a[i].x;
	}
	cout << ans;
	return 0;
}
