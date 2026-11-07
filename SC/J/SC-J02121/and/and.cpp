#include<bits/stdc++.h>
using namespace std;
int n,m,a[200006];
int ans=0;
void dfs(int z,int b,int ans11){
	//cout<<ans<<" ";
	if(z>0){
		for(int i=b+1;i<=n-z+1;i++){
		    int ans2=ans11;
		    int c=a[i];
		    dfs(--z,i,(ans2&c));
	    }
	    return;
	}
	else if(z==0){
		ans=max(ans,ans11);
		return;
	}
	else return;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	int ans1=1;
	for(int i=1;i<=21;i++){
		ans1*=2;
	}
	ans1--;
//	if(n<=20){
//		dfs(m,0,ans1);
//		cout<<ans;
//	}
	if(m==n){
		int aa=a[1];
		for(int i=2;i<=n;i++){
			aa&=a[i];
		}
		cout<<aa;
	}
	else if(m==1){
		int mx=0;
		for(int i=1;i<=n;i++){
			mx=max(mx,a[i]);
		}
		cout<<mx;
	}
	else if(m==2){
		int mx=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				mx=max(mx,a[i]&a[j]);
			}
		}
		cout<<mx;
	}
	else if(m==n-1){
		int mx=0;
		for(int i=1;i<=n;i++){
			int a1=ans1;
			for(int j=1;j<=n;j++){
				if(i==j) continue;
				a1&=a[j];
			}
			mx=max(mx,a1);
		}
		cout<<mx;
    }
    else{
    	int e=n;
    	int zt=0;
        while(e&2==0){
        	zt++;
    	    e/=2;
	    }
		if(e==1){
			int zt1=0;
			while(m!=0){
				zt1++;
				m/=2;
			}
			zt1--;
			int cnt=1;
			for(int i=1;i<=zt+1;i++){
				cnt*=2;
			}
			cnt--;
			int cnt1=1;
			for(int i=1;i<=zt1;i++){
				cnt1*=2;
			}
			cnt1--;
			cout<<cnt-cnt1;
		}
	}
}