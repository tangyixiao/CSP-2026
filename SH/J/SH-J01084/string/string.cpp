#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

const int N=2e5+10;

int a[N];
char c[N];

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int ans=0;
	int l=1,r=n;
	while(l<r){
		if(c[l]==c[r]){
			if(a[l]<a[r]){
				a[r]-=a[l];
				l++;
				//cout<<1<<endl;
			}
			else if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
				//cout<<2<<endl;
			}
			else{
				l++;
				r--;
				//cout<<3<<endl;
			}
		}
		else{
			if(a[l]<a[r]){
				ans+=a[l];
				//cout<<ans<<" "<<a[l];
				a[r]-=a[l];
				l++;
				//cout<<4<<endl;
			}
			else if(a[l]>a[r]){
				ans+=a[r];
				a[l]-=a[r];
				r--;
				//cout<<5<<endl;
			}
			else{
				ans+=a[l];
				l++;
				r--;
				//cout<<6<<endl;
			}
		}
		//cout<<ans<<endl;
	}
	cout<<ans;
	return 0; 
}
