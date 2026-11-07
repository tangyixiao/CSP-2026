#include <bits/stdc++.h> 
using namespace std;
int n,a[200005];
char c[200005];
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for (int i=1,j=n;i<j;i++,j--){
		
		if (c[i]==c[j]){
			int minai=min(a[i],a[j]);
			a[i]-=minai;
			a[j]-=minai;
			
			while (a[i]>0 and j-1!=i){
				if (c[j-1]!=c[i]){
					minai=min(a[i],a[j-1]);
					ans+=minai;
				}
				a[i]-=minai;
				a[j-1]-=minai;
				if (a[j-1]==0) j--;
			}
			while (a[j]>0 and i+1!=j){
				if (c[i+1]!=c[j]){
					minai=min(a[j],a[i+1]);
					ans+=minai;
				}
				a[j]-=minai;
				a[i+1]-=minai;
				if (a[i+1]==0) i++;
			}
		}
		else {
			int minaii=min(a[i],a[j]);
			a[i]-=minaii;
			a[j]-=minaii;
			ans+=minaii;
			while (a[i]>0 and j-1!=i){
				if (c[j-1]!=c[i]){
					minaii=min(a[i],a[j-1]);
					ans+=minaii;
				}
				a[i]-=minaii;
				a[j-1]-=minaii;
				if (a[j-1]==0) j--;
			}
			while (a[j]>0 and i+1!=j){
				if (c[i+1]!=c[j]){
					minaii=min(a[j],a[i+1]);
					ans+=minaii;
				}
				a[j]-=minaii;
				a[i+1]-=minaii;
				if (a[i+1]==0) i++;
			}
		}
	}
	cout<<ans;
	return 0;
}
