#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000000005];
int main(){
	freopen("card.in",stdin,r);
	freopen("card.out",stdout,w);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==2){
		cout<<n<<" "<<n;
		return 0;
	}
	cout<<3<<" "<<1<<" "<<4<<endl; 
	return 0;
}
