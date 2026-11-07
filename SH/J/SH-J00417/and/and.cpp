#include<bits/stdc++.h>
using namespace std;
int n,m,t,ans,a1;
int a[200005];
int s,d;
bool f(int n){
	int x=n+1,k=1;
	while(k<x){
		k*=2;
	}
	if(k==x)return 1;
	return 0;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		t=max(a[i],t);
	}
	sort(a+1,a+1+n,greater<int>());
	if(m==1){
		cout<<t<<endl;
		return 0;
	}
	if(m==n){
		t=a[1];
		for(int i=2;i<=n;i++){
			t&=a[i];
		}
		cout<<t<<endl;
		return 0;
	}
	if(m==2){
		ans=0,a1=0;
		for(int i=1;i<=n;i++){
			if(a[i]==a[i+1]){
				a1=a[i];
				break;
			}
		}
		
	}
	if(m==n-1){
		ans=0;
		for(int i=1;i<=n;i++){
			bool flag=0;
			t=0;
			for(int j=1;j<=n;j++){
				if(i==j)continue;
				else{
					if(flag==0){
						t=a[j];
						flag=1;
					}
					else t&=a[j];
				}
			}
			ans=max(ans,t);
		}
		cout<<ans<<endl;
		return 0;
	}
	bool ok=0;
	for(int i=1;i<=n;i++){
		if(f(a[i])==1){
			s=i;
			ok=1;
		}
	}
	if(ok==1){
		for(int i=s-m;i<=s;i++){
			if(i==s-m){
				t=a[i];
			}
			else t&=a[i];
		}
		cout<<t<<endl;
		return 0;
	}
}
