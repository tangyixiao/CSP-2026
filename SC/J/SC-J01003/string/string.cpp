#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
long long dif;
int n,a[N];
char c[N];
int main(){
	std::ios::sync_with_stdio(false);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int l=1,r=n;
	dif=0;
	while(l<r){
		if(a[l]>a[r]){
			if(c[l]!=c[r]){
				dif+=a[r];
				a[l]-=a[r];
			}
			r--;
		} else if(a[l]<a[r]){
			if(c[l]!=c[r]){
				dif+=a[l];
				a[r]-=a[l];
			}
			l++;
		} else {
			if(c[l]!=c[r]){
				dif+=a[r];
				a[l]-=a[r];
			}
			l++;
			r--;
		}
	}
	cout<<dif;
	return 0;
}
