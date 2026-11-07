#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen('and','r',in);
	freopen('and','w',out);
	int n,ans=0,a[200005],m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		if(a[i] and a[i+1]>=ans){
			ans=a[i] and a[i+1];
		}
	}
	cout<<ans;
	return 0;
}
