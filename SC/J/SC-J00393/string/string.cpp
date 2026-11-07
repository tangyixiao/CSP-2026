#include<bits/stdc++.h>
using namespace std;
int n;
long long a[200010];
char c[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int tot=n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long r=tot,l=1,lst=0,ans=0;
	while(l<=tot){
		int tmp=lst;
		lst+=a[l];
		if(lst>=a[r]){
			if(c[r]!=c[l]){
				ans+=a[r]-tmp;
			}
			lst-=a[r];
			r--;
			while(lst>=a[r]){
				if(c[r]!=c[l]){
					ans+=a[r];
				}
				lst-=a[r];
				r--;
			}
			if(c[l]!=c[r]){
				ans+=lst;
			}
		}else{
			if(c[r]!=c[l]){
				ans+=lst-tmp;
			}
		}
		l++;
	}
	cout<<ans/2;
	return 0;
}