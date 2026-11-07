#include<bits/stdc++.h>
using namespace std;
struct num{
	int gs;
	char zf;
}a[200005];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin
		>>a[i].gs
		>>a[i].zf;
	}
	long long ans=0;
	int sy=0;
	int i=0;
	int j=n-1;
	
	while(i!=j && i<j){
		if(a[i].zf!=a[j].zf){
			if(a[i].gs>=a[j].gs){
				ans+=a[j].gs;
				a[i].gs-=a[j].gs;
				a[j].gs=0;
			}else{
				ans+=a[i].gs;
			    a[j].gs-=a[i].gs;
			    a[i].gs=0;
			}
		}else{
			if(a[i].gs>=a[j].gs){
				a[i].gs-=a[j].gs;
				a[j].gs=0;
			}else{
			    a[j].gs-=a[i].gs;
			    a[i].gs=0;
			}
		}
		if(a[i].gs==0) i++;
		if(a[j].gs==0) j--;
	}
	cout<<ans;
}