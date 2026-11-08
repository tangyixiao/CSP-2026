#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long ans=0;
	int n,cnt=0;
	cin>>n;
	char cu;
	int au=0;
	for(int i=1;n>=i;i++){
		cin>>au;
		cin>>cu;
		if(cu==c[cnt]) a[cnt]+=au;
		else {
			a[++cnt]+=au;
			c[cnt]=cu;
		}
	}
	int i=0;
	int l=1,r=cnt;int lshu=0,rshu=0;
		char lc,rc;
	while(l<=r){
		++i;
        l=i,r=cnt-i+1;
        if(rshu!=0){
        	c[++r]=rc;
        	a[r]=rshu;
        	rshu=0;
		}if(lshu!=0){
			c[--l]=lc;
			a[l]=lshu;
			lshu=0;
		}
		if(c[l]==c[r]){
			ans+=abs(a[l]-a[r]);
			if(a[l]>a[r]){
				lshu=a[l]-a[r];
				lc=c[l];
			}if(a[l]<a[r]){
				rshu=a[r]-a[l];
				rc=c[r];
			}
		}else {
			if(a[l]<=a[r]){
				ans+=a[l];
				rshu=a[r]-a[l];
				rc=c[r];
			}else{
				ans+=a[r];
				lshu=a[l]-a[r];
				lc=c[l];
			}
		}
	}
		cout<<ans;
		
	
	return 0;
} 
