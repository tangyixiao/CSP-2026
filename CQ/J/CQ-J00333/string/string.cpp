#include<bits/stdc++.h>
using namespace std;
char sj[200005],lz,rz;
long long n,ans,l,r,a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>sj[i];
	}
	l=1;
	r=n;
	while(l<r){
		if(a[l]<a[r]&&sj[l]!=sj[r]){
			ans+=a[l];
			a[r]-=a[l];
			l++;						
		}
		else if(a[l]>a[r]&&sj[l]!=sj[r]){
			ans+=a[r];
			a[l]-=a[r];
			r--;
			
		}
		else if(a[l]==a[r]&&sj[l]!=sj[r]){
			ans+=a[l];
			l++;
			r--;						
		}
		if(sj[l]==sj[r]){
			if(a[l]<a[r]){
				a[r]-=a[l];
				l++;								
			}
			else if(a[l]>a[r]){
				a[l]-=a[r];
				r--;
				
			}
			else if(a[l]==a[r]){
				l++;
				r--;						
			}	
		}
		
	}
	cout<<ans;
	return 0;
}






