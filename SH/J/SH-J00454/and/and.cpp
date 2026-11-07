#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int n,m,a[200010],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n<=20){
		for(int i=0;i<(1<<n);i++){
			int p=0,sum=0;
			for(int j=0;j<n;j++){
				if((i>>j)&1==1){
					if(p==0) sum=a[j];
					else sum=(sum&a[j]);
					p++;
				}
			}
			if(p==m){
				ans=max(ans,sum);
			}
		}
		cout<<ans;
	}
	else if(n>20 && n<=2000){
		if(m==1){
			for(int i=0;i<n;i++){
				ans=max(ans,a[i]);
			}
			cout<<ans;
		}
		else if(m==n){
			for(int i=0;i<n;i++){
				if(i==0) ans=a[i];
				else ans=(ans&a[i]);
			}
			cout<<ans;
		}
		else if(m==2){
			for(int i=0;i<n;i++){
				int u=a[i];
				for(int j=i+1;j<n;j++){
					u=(u&a[j]);
					ans=max(ans,u);
					u=a[i];
				} 
			}
			cout<<ans;
		}
	}
	else{
		if(m==n-1){
			for(int i=1;i<n;i++){
				ans=(ans&a[i]);
			}
			cout<<ans;
		}
		else{
			sort(a,a+n);
			for(int i=n-1;i>=((n-1)-m+1);i--){
				ans=(ans&a[i]);
			}
			cout<<ans;
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
