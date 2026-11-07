#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=2e5+5;
int a[N];
bool cmp(int a,int b){
	return a>b;
}
bool bmp(int a,int b){
	return a<b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	if(m==1){
		sort(a+1,a+n+1,cmp);
		cout<<a[1];
		return 0;
	}else if(m==2){
		sort(a+1,a+n+1,cmp);
		int sum=a[1]&a[2];
		cout<<sum;
		return 0;
	}else if(m==n){
		int ans=0;
		ans=a[1]&a[2];
		for(int i=3;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}else if(m==n-1){
		sort(a+1,a+n+1,bmp);
		int ans=0;
		for(int i=2;i<n;i++){
			a[i]=a[i]&a[i+1];
			ans=a[i];
		}
		cout<<ans;
		return 0;
	}
}
