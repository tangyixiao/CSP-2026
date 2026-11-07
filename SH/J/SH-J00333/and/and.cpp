#include<bits/stdc++.h>
using namespace std;
int a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    int n,m,ans=0,f=1,f1=1;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    	if(a[i]!=i-1){
    		f=0;
		}
		if(a[i]>3){
			f1=0;
		}
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
	}else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				int b=a[i]&a[j];
				ans=max(ans,b);
			}
		}
	}else if(m==n){
		int c=a[1];
		for(int i=1;i<=n;i++){
			c=c&a[i];
		}
		ans=c;
	}else if(f){
		int e=a[n];
		for(int i=1;i<=m;i++){
			e=e&a[i];
		}
		ans=e;
	}else if(f1){
		int c1=0,c2=0,c3=0,c0=0;
		for(int i=1;i<=n;i++){
			if(a[i]==0){
				c0++;
			}
			if(a[i]==1){
				c1++;
			}
			if(a[i]==2){
				c2++;
			}
			if(a[i]==3){
				c3++;
			}
		}
		if(c3>=m){
			ans=3;
		}else if(c3+c2>=m){
			ans=2;
		}else if(c3+c1>=m){
			ans=1;
		}else{
			ans=0;
		}
	}else{
		sort(a+1,a+n+1);
		ans=a[n-m+1];
	}
	cout<<ans;
	return 0;
} 
