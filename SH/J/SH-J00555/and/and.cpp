#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ans;
	cin>>n>>m;
	int a[200005];
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,cmp);
	if(m>=2 && m!=n){
		ans=a[1]&a[2];
		for(int i=3;i<=m;i++){
			ans=ans&a[i];
		}
	}
	else if(m==1){
		cout<<a[1]<<endl;
		return 0;
	}
	else{
		cout<<n-m<<endl;
		return 0;
	}
	cout<<ans<<endl;
	return 0;
} 
