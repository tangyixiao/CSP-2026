#include<bits/stdc++.h>
using namespace std;
long long a[200020];
int n,m;
int main(){
	freopen ("and.in","r",stdin);
	freopen ("and.out","w",stdout);
	cin>>n>>m;
	int mm;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	if (m==1){
		int mm=-1;
		for (int i=1;i<=n;i++){
			if (mm<a[i]) mm=a[i];
		}
	}
	if (m==2){
		mm=-1;
		for (int i=1;i<=n-1;i++){
			for(int j=i+1;j<=n;j++){
				if (a[i]&a[j]>mm){
					mm=a[i]&a[j];
				}
			}
		}
	}
	if (m==n-1){
		for (int i=1;i<=n;i++){
			long long tot=-1;
			for (int j=1;j<=n;j++){
				if (j!=i){
					tot=tot&a[j];
				}
			}
			if (mm<tot){
				mm=tot;
			}
		}
	}
	if (m==n){
		long long tot=-1;
		for (int i=1;i<=n;i++){
			tot=tot&a[i];
		}
		mm=tot;
	}
	cout<<mm;
	return 0;
}
