#include<bits/stdc++.h>
using namespace std;
	long long a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	long long ans=0;
	if(m==1){
		for(int i=0;i<n;i++)
			if(a[i]>=ans)ans=a[i];
	}
	if(m==2){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				long long cnt=(a[i]&a[j]);
				if(cnt>=ans)ans=cnt;				
			}
		}
	}
	if(m==n){
		ans=a[0];
		for(int i=1;i<n;i++)
			ans=(ans&a[i]);
	}
	if((m!=1)&&(m!=2)&&(m!=n)){
		sort(a,a+n);
		ans=a[n-1];
		for(int i=n-2;i>=n-m;i--)
			ans=(ans&a[i]);
	}
	cout<<ans;
	return 0;
}
