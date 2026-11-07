#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	vector<ll> num(n);
	vector<char> chr(n);
	for(int i=0;i<n;i++){
		cin>>num[i]>>chr[i];
	}
	int l=0,r=n-1;
	ll ans=0;
	while(1){
		if(l>=r){
			break;
		}
		if(num[l]==num[r]&&chr[l]==chr[r]){
			l++;
			r--;
		}
		else if(chr[l]==chr[r]&&num[l]>num[r]){
			num[l]-=num[r];
			r--;
		}
		else if(chr[l]==chr[r]&&num[l]<num[r]){
			num[r]-=num[l];
			l++;
		}
		else if(num[l]==num[r]){
			ans+=num[l];
			l++;
			r--;
		}
		else if(num[l]>num[r]){
			ans+=num[r];
			num[l]-=num[r];
			r--;
		}
		else if(num[l]<num[r]){
			ans+=num[l];
			num[r]-=num[l];
			l++;
		}
		//cout<<l<<' '<<r<<endl;
	}
	cout<<ans<<endl;
}