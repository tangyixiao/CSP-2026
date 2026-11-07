#include <bits/stdc++.h>
using namespace std;
long long a[200005];
long long maxa=2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2-1;
long long n,m;

int main(){
//	freopen(travel1.in,"r",in);
//	freopen(travel.out,"o",out);

cin>>n>>m;
for(int i=1;i<=n;i++){
	cin>>a[i];
}
int k=0;
sort(a+1,a+n+1);
for(int i=n;i>=m;i--){
	
	maxa=maxa&a[i];
}

cout<<maxa;
	return 0;
}

