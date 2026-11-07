#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
string s;
int a[N];
char c[N];
long long ans;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;cin>>n;	
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int l=1,r=n;
	while(l<=r){
		if(c[l]!=c[r]) ans+=min(a[l],a[r]);
		if(a[l]>a[r]){			
			a[l]-=a[r];
			a[r]=0;
			r--;
		}else if(a[l]<a[r]){			
			a[r]-=a[l];
			a[l]=0;
			l++;
		}else{
			a[l]=a[r]=0;
			l++;
			r--;				
		}
	}
	cout<<ans;
	return 0;
} 