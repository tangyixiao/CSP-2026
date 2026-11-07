#include<bits/stdc++.h>
#define int long long
using namespace std;
struct aaa{
	int q;
	char w;
}a[200015]; 
signed main(){
	freopen("string.in","r",stain);
	freopen("string.out","w",stdout);
	int n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].q>>a[i].w;
	}int i=1,j=n;	
		while(i<j){
			if(a[i].w==a[j].w){
				if(a[i].q>=a[j].q){
					a[i].q-=a[j].q;
					j--;
				}else{
					a[j].q-=a[i].q;
					i++;
				}
			}else if(a[i].q>a[j].q){
				a[i].q-=a[j].q;
				ans+=a[j].q;
				j--;
			}else if(a[i].q==a[j].q){
				ans+=a[i].q;
				i++;
				j--;
			}else {
				a[j].q-=a[i].q;
				ans+=a[i].q;
				i++;
			}
		}
	cout<<ans;
	return 0;
}
   