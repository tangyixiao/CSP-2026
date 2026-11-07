#include<bits/stdc++.h>
using namespace std;
int p(int m){
	int ans=0;
	while(m){
		m&=m-1;
	}
	return ans;
}
bool cmp(int x,int y){
	int a=p(x),b=p(y);
	if(a==b){
		return x>y;
	}else{
		return a>b;
	}
}
int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	sort(a+1,a+1+n,cmp);
	int res=0;
	for(int i=1;i<=m;i++){
		if(i==1) res|=a[1];
		res&=a[i];
	}
	cout<<res;
	return 0;
}
