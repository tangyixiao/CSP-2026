#include<bits/stdc++.h>
using namespace std;
int n,m;
struct Limeping{
	int n,b;
}a[200010];
bool cmp(Limeping x,Limeping y){
	return x.b>y.b||x.b==y.b&&x.n>y.n;
}
int count(int x){
	int cnt=0;
	while(x>0){
		cnt+=x%2;
		x/=2;
	}
	return cnt;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0); 
	cin>>n>>m;
	for(int i=0;i<n;i++){
	    cin>>a[i].n;
	    a[i].b=count(a[i].n);
	}
	sort(a,a+n,cmp);
	int ans=2147483647;
	for(int i=0;i<m;i++){
		ans&=a[i].n;
	}
	cout<<ans;
	return 0;
}
