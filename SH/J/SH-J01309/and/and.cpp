#include<bits/stdc++.h>
using namespace std;
int n,m,a[10086],ans=-10086;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n-1);
	if(m==1){
		cout<<a[n-1];
		return 0;
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			ans=max(ans,(a[i]&a[j]));
		}
	}
	cout<<ans;
	return 0;
}//guaguabaoyou 
