#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200005];
bool cmp(int x,int y){
	return x>y;
}
int aand(int num,int ans){
	if(num==m){
		return a[num]&ans;
	}else{
		return aand(num+1,a[num]&ans);
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	cout<<aand(1,a[1]);
	return 0;
}
