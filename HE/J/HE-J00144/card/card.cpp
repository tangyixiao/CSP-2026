#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[2000005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(long long i=1;i<=n;i++) cin>>a[i];
	if(m==1){
		cout<<n;
		return 0;
	}
	bool f=0;
	for(long long i=1;i<=n;i++){
		for(long long j=i+1;j<=n;j++){
			if(a[i]==a[j]) f=1;
		}
	}
	if(f==0){
		for(long long i=1;i<=m;i++){
		    if(i!=m) cout<<n<<" ";
		    else cout<<n;
	    }  
	}
	return 0;
}

