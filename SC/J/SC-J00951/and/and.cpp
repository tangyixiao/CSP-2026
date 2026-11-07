#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200010];
bool cmp(int a,int b){
	return a>b;
}
int main(){
    freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
    int ans=2147483647;
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=m;i++){
		ans&=a[i];
	}
	cout<<ans;
	return 0;
}
