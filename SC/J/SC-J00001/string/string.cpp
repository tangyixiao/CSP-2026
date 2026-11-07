#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],sum=0;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int l=1,r=n;
	while(l<r){
		if(c[l]!=c[r]){
			if(a[l]>a[r]){
				sum+=a[r];
				a[l]-=a[r];
				r--;
			}
			else if(a[l]<a[r]){
				sum+=a[l];
				a[r]-=a[l];
				l++;
			}
			else if(a[l]==a[r]){
				sum+=a[l];
				a[l]-=a[r];
				l++;
				r--;
			}
		}
		else{
			if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}
			else if(a[l]<a[r]){
				a[r]-=a[l];
				l++;
			}
			else if(a[l]==a[r]){
				a[l]-=a[r];
				l++;
				r--;
			}
		}
	}
	cout<<sum;
	return 0;
}