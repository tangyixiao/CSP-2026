#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+12;
int a[N];
char c[N];
int n,ans,l,r; 
signed main(){
	freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
    l=1,r=n;
    while(l<=r){
    	if(a[l]>=a[r]){
    	   if(c[l]==c[r]){
    	   	  a[l]-=a[r];
    	   	  r--;
    	   	  continue;
		   }
		   else{
		   	  ans+=a[r];
		   	  a[l]-=a[r];
		   	  r--;
		   }
		}
		else{
			 if(c[l]==c[r]){
    	   	  a[r]-=a[l];
    	   	  l++;
    	   	  continue;
		   }
		   else{
		   	  ans+=a[l];
		   	  a[r]-=a[l];
		   	  l++;
		}
	}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
