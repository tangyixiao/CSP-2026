#include<bits/stdc++.h>
using namespace std;
int n;
int a[200100];
char c[200100];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i]>>c[i];
	int l=0,r=n-1;
	while(l<r){
		int kmi=0,kmx=0;
		if(a[l]>a[r]){
			kmx=l;
			kmi=r;
		}
		else{
			kmx=r;
			kmi=l;
		}
		if(c[l]!=c[r]) ans+=a[kmi];
		a[kmx]-=a[kmi];
		a[kmi]=0;
		if(a[l]==0) l++;
		if(a[r]==0) r--;
	}
	cout<<ans;
	return 0;
}


