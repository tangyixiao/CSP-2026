#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m;
int a[N],ans,xz,ans2;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i <= n; i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1; i <= n; i++){
		int ans1=a[i],xz=1;
		for(int j=i+1;j<=n;j++){
			if(xz==m)break;
			int now=ans1&a[j];
			if(!now)continue;
			else{
				ans1=now,xz++;
			}
		}
		if(xz==m)ans=max(ans,ans1);
	}
	cout<<ans;
	return 0;
	
} 
