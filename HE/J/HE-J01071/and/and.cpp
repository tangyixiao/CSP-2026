#include<bits/stdc++.h>
using namespace std;
int n,m,a,ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		if(!i)cin>>ans;
		else{
			cin>>a;
			ans=ans&a;
		}
	}
	cout<<ans;
	return 0;
}
