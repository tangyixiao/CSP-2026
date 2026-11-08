#include<bits/stdc++.h>
using namespace std;
long long ex[40],m,n,ans,k;
struct node{
	long long v,d;
}a[200010];
bool cmp(node x,node y){
	return x.d>y.d;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i].v;
	}
	for(int i=1;i<=31;i++){
		ex[i]=(ex[i-1]+1)*2-1;
		for(int j=1;j<=n;j++){
			a[j].d=a[j].v&ex[i];
		}
		sort(a+1,a+n+1,cmp);
		for(int j=1;j<=n;j++){
			if(j==1)k=a[j].v;
			if(j<=m){
				k=k&a[j].v;	
			}
		}
		ans=max(k,ans);
	}
	cout<<ans;
	return 0;
}
