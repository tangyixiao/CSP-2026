#include <bits/stdc++.h>
using namespace std;
int n;
long long a[200005];
char b[200005];
long long sum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>b[i];
	}
	int l=1,r=n;
	while(l<=r){
		if(b[l]!=b[r]){
			sum+=min(a[l],a[r]);
			if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}
			else if(a[l]<a[r]){
				a[r]-=a[l];
				l++;
			}
			else if(a[l]==a[r]){
				r--;
				l++;
			}
		}
		if(b[l]==b[r]){
			if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
			}
			else if(a[l]<a[r]){
				a[r]-=a[l];
				l++;
			}
			if(a[l]==a[r]){
				r--;
				l++;
			}
	    }
	}
	cout<<sum;	
	return 0;
}
