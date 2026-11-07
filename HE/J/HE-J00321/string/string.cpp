#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int n,a[220000],cnt;
char b[220000];
signed main(){
   freopen("string.in","r",stdin);
   freopen("string.out","w",stdout);
    
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i]>>b[i];
	}
	int l=1,r=n+1-l;
	while(l!=r){
		if(b[l]!=b[r]){
			if(a[l]>a[r]){
				a[l]=a[l]-a[r];
				cnt+=a[r];
				a[r]=0;
				r--;
			}else{
				a[r]=a[r]-a[l];
				cnt+=a[l];
				a[l]==0; 
				l++;
			}
		}else{
			if(a[l]>a[r]){
				a[l]=a[l]-a[r];
				a[r]=0;
				r--;
			}else{
				a[r]=a[r]-a[l];
				a[l]==0; 
				l++;
			}
		}
	}
	cout<<cnt; 
	return 0;
}

