#include<bits/stdc++.h>
using namespace std;
const int N=2e5+50;
int n;
long long a[N],ans,l,r;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
    r=n;
    l=1;
    for(int i=1;i<=n;i++){
    	cin>>a[i]>>c[i];
	}
	while(l<=r){
		if(a[l]<a[r]){
			if(c[l]!=c[r]){
				ans+=a[l];
			}
			a[r]-=a[l];
			l++;
		}
		else if(a[l]>a[r]){
			if(c[l]!=c[r]){
				ans+=a[r];
			}
			a[l]-=a[r];
			r--;
		}
		else{
			if(c[l]!=c[r]){
				ans+=a[l];
			}
			l++;
			r--;
		}
	}
	cout<<ans;
	return 0;
}
