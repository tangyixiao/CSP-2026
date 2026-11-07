#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e4+7;
int a[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;++i) {
    	cin>>a[i];
	}
    if(n==m) {
    	int ans=a[1];
    	for(int i=2;i<=n;++i){
    		ans=(ans&a[i]);
		}
		cout<<ans<<'\n';
	}
	else if(m==1) {
		int max=0;
		for(int i=1;i<=n;++i){
			if(a[i]>max) max=a[i];
		}
		cout<<max<<'\n';return 0;
	}
	else if(m==2){
		int maxx=0;
		for(int i=1;i<n;++i){
			for(int j=i+1;j<=n;++j){
				maxx=max(a[i]&a[j],maxx);
			}
		}
		cout<<maxx<<'\n';
	}int uun=0;
	 if(n!=m)
	{
		    for(int i=1;i<n;++i){
			   for(int j=i+1;j<=n;++j){
				uun=max(uun,a[i]&a[j]);//找最值 
			   }
		    }
		    for(int i=1;i<n;++i){
			    for(int j=i+1;j<=n;++j){
			    if(a[i]&a[j]==uun){
				    a[i]=-1;a[j]=-1;//排除操作 
			        }
			    }
		    }
		    int nnu=0;
		    for(int i=2;i<=m;++i){
		    	
		    for(int j=1;j<=n;++j){
		    	nnu=0;
		    	if(a[j]==-1) continue;
			   	nnu=max(uun&a[j],nnu);
			   }
			   for(int z=1;z<=n;++z){
			 	if(uun%a[z]==nnu) a[z]=-1;
			 }
			 uun=nnu;
			}
			 cout<<nnu;
		}
	fclose(stdin);
	fclose(stdout);
		return 0;
	}
	 
    

