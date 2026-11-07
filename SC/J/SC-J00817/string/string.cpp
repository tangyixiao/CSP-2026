#include<bits/stdc++.h>
#define int long long
using namespace std;
struct f {
	int g;
	char h;
} x[200005];
string a;
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int k=0;
	for(int i=1; i<=n; i++) {
		cin>>x[i].g>>x[i].h;
		k+=x[i].g;
	}
	int l=1;
	int r=n;
	int sum=0;
	while(k>1) {
		if(x[l].g>=x[r].g&&k>=x[r].g*2) {
			if(x[l].h!=x[r].h) {
				sum+=x[r].g;
			}
			k-=x[r].g*2;
			x[l].g-=x[r].g;
			r--;
		} else if(x[l].g<x[r].g&&k/2>=x[l].g) {
			if(x[l].h!=x[r].h) {
				sum+=x[l].g;
			}
			x[r].g-=x[l].g;
			k-=x[l].g*2;
			l++;
		} else {
			if(x[l].h!=x[r].h) {
				sum+=k/2;
			}
			k/=2;
		}
	}
	cout<<sum;
	return 0;
}