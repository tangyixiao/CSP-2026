#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long a[N];
char d[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		char c;
		long long x;
		cin>>x>>c;
		a[i]=x;
		d[i]=c;
	}
	long long ans=0;
	int l=1,r=n;
	while(l!=r){
//		cout<<l<<" "<<r<<endl;
		if(d[l]==d[r]){
//			cout<<d[l]<<" "<<d[r]<<endl;
			if(a[l]<a[r]){
				a[r]-=a[l];
				l++;
			}else if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}else{
				l++;
				r--;
			}
		}else{
//			cout<<d[l]<<" "<<d[r]<<endl;
			ans+=min(a[l],a[r]);
			if(a[l]<a[r]){
				a[r]-=a[l];
				l++;
			}else if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}else{
				l++;
				r--;
			}
		}
	}
	cout<<ans<<endl;
	return 0;	
}