#include<bits/stdc++.h>
using namespace std;
long long sum,ans;
int n; 
char c[200020];
int a[200020];
long long b[200020];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int l=1,r=n;
	while(l<r){
		if(c[l]!=c[r]){
			if(a[l]>a[r]){
			    ans+=a[r];
				a[l]-=a[r];
			    r--;
		    } else if(a[l]<a[r]){
		    	ans+=a[l];
		    	a[r]-=a[l];
		    	l++;
			} else{
				ans+=a[l];
				a[l]=0;
				a[r]=0;
				l++;
				r--;
			}
		} else{
			if(a[l]>a[r]){
				a[l]-=a[r];
			    r--;
		    } else if(a[l]<a[r]){
		    	a[r]-=a[l];
		    	l++;
			} else{
				a[l]=0;
				a[r]=0;
				l++;
				r--;
			}
		}
	}
	cout<<ans;
	return 0;
} 
