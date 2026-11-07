#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200009;
int n,m,a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	if(m==1){
		cout<<a[n-1]<<endl;
		return 0;
	} 
	if(m==2){
		int ans1=-1;
		for(int i=0;i<n;i++){
			for(int j=i;j<n;j++){
				ans1=max(ans1,a[i]&a[j]);
			}
		}
	}
	if(m==n){
		int ans=a[0];
		for(int i=1;i<n;i++){
			ans=ans&a[i];
		}
		cout<<ans<<endl;
		return 0;
	}
	cout<<a[n-m]<<endl;
	return 0;
}

