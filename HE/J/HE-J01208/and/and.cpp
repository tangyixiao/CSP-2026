#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	
	if(n<=20){
		int a[30],ans;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+1+n,cmp);
		ans=a[1];
		for(int i=1;i<=m;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	
	if(m==1){
		int tans=-1,tt;
		for(int i=1;i<=n;i++){
			cin>>tt;
			tans=max(tans,tt);
		}
		
		return 0;
	}
	
	if(n<=2000){
		int a[2030],ans;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+1+n,cmp);
		ans=a[1];
		
			if(m==2){
				int tans=0;
				for(int i=2;i<=30;i++){
					tans=max(tans,a[i]&ans);
				}
				cout<<tans;
				return 0;
			}
			
		for(int i=1;i<=m;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	if(n<=200000){
		int a[200020],ans;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+1+n,cmp);
		ans=a[1];
		for(int i=1;i<=m;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	
	return 0;
}
