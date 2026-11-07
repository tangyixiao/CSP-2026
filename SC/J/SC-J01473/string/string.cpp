#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,a[N],l,r,sum=0;
char c[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}l=1;r=n;
	while(l<r){
		if(a[l]<a[r]){
			if(c[l]!=c[r]){
				sum+=a[l];
			}a[r]-=a[l];
			l++;
		}else if(a[l]>a[r]){
			if(c[l]!=c[r]){
				sum+=a[r];
			}a[l]-=a[r];
			r--;
		}else{
			if(c[l]!=c[r]){
				sum+=a[l]; 
			}l++;r--;
		}
	}cout<<sum;
	return 0;
}