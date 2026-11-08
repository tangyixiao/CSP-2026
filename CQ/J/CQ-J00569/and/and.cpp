#include<bits/stdc++.h>
using namespace std;
int n,m,ans=0,a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		if(a[i+1]==a[i])i++;
		else{
			for(int j=0;j<n;j++){
				if(i!=j){
				if(a[j+2]==a[j])j++;
				else {
					ans=max(ans,(a[i]&a[j]));
				}}
			}
		}
	}
	cout<<ans;
	return 0;
}
