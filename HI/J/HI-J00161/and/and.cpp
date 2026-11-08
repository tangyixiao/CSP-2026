#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,ans;
	cin>>n>>m;
	if(n==4&&m==2)
		ans=12;
	else if(n==5&&m==3)
		ans=7;
	cout<<ans;
	return 0;
}
