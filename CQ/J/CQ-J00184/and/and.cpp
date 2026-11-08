#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
int arr[N];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	int max_z=-1e18;
	for(int i=1;i<=n;i++){
		max_z=max(max_z,arr[i]);
	}
	if(m==1){
		cout<<max_z;
	}else if(m==n){
		for(int i=1;i<=n;i++){
			arr[i]=(arr[i]&arr[i-1]);
		}
		cout<<arr[n];
	}else if(m==2){
		int max_x=-1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j) continue;
				int sum=(arr[i]&arr[j]);
				max_x=max(max_x,sum);
			}
		}
		cout<<max_x;
	}
	return 0;
}
