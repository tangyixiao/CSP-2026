#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[200003],b[200003];
long long andd(long long x,long long y){
	
	return x&y;
}
long long maxx(long long x,long long y){
	if(x>y){
		return x;
	}if(x<y){
		return y;
	}if(x==y){
		return x;
	}
}//Trick||Treat!
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin>>n>>m;
    for(long long i=1;i<=n;i++){
    	cin>>a[i];
    	b[i]=a[i];
    	a[i]=andd(b[i-1],a[i]);
	}
	if(n==m){
		long long ans=b[1];
		for(int i=2;i<=n;i++){
			ans=andd(ans,b[i]);
			//
		}
		cout<<ans<<" ";
		return 0;
	} if(m==1){
		long long ans=0;
		for(int i=1;i<=n;i++){
			ans=maxx(ans,b[i]);
		}
		cout<<ans<<" ";
		return 0;
	}
	if(m==2){
		long long ans=b[1];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j){
					continue;
				}
				ans=maxx(ans,andd(b[i],b[j]));
			}
			
		}
		cout<<ans;
	}
	
	return 0;
} 
