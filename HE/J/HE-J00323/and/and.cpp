#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],f[200005];
bool k;
bool cmp(long long a,long long b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(!k){
			long long a1=a[i];
		    while(a1!=0){
			    if(a1%2==0){
				    k=true;
				    break;
			    }
			    a1/=2;
		    }
		}
	}
	if(n==m){
		long long ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
		return 0;
	}
	if(k==false){
		sort(a+1,a+1+n,cmp);
		cout<<a[m];
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=min(m,i*1ll);j>=1;j--){
			if(j==1){
				f[j]=max(f[j],a[i]);
			}else{	
			    f[j]=max(f[j],f[j-1]&a[i]);
			}
		}
	}
	cout<<f[m];
	return 0;
}
