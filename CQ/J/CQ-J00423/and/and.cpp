#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],ans;
bool cmp(long long a,long long b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	if(n==m){
		ans=a[0];
		for(int i=1;i<n;i++)ans&=a[i];
		cout<<ans;
		return 0;
	}
	else if(m==1){
		cout<<a[0];
		return 0;
	}
	else{
		ans=a[0];
		for(int i=1;i<m;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	return 0;
}
