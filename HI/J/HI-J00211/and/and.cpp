#include<bits/stdc++.h>
using namespace std;
long long a[200009];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,b;
	cin>>n>>b;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	}
	int ans=0,mx=a[1],x=1;
	bool flag=0;
	for(int i=1;i<=b;i++){
		mx=a[1];
		x=1;
		for(int j=1;j<=n;j++){
			if(a[j]>mx){
				mx=a[j];
				x=j;
			}
		}
		if(flag){
			ans=ans&mx;
			a[x]=0;
		}else{
			ans=mx;
			flag=1;
			a[x]=0;
		}
	}
	cout<<ans;
} 
