#include<bits/stdc++.h>
using namespace std;
long long n,m,ans;
long long a[10000005];
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=m;i++){
    	if(i==1) ans=a[i];
		else ans=ans&a[i];
	}
	cout<<ans;
	return 0;
}

