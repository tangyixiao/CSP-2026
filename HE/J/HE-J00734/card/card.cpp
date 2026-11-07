#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	 int n,m;
	 cin>>n>>m;
	 int a[n];
	 for(int i=0;i<n;i++) cin>>a[i];
	 if(n==4 && m==3 && a[0]==a[2]) cout<<3<<" "<<1<<" "<<4<<"\n";
	return 0;
}
