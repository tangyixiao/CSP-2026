#include<bits/stdc++.h>
using namespace std;
const int N=1e8+10;
long long n,a[N],m,w,w1,x,o;
int main(){
freopen("and.in","r",stdin);
freopen("and.out","r",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
	cin>>a[i];
	x=max(a[i],a[i+1]);
	}
	if(m==1){
	cout<<x;
	}
	if(m==n){
	for(int i=1;i<n;i++){
	a[i+1]=a[i]&a[i+1];
	}
	cout<<a[n];
	}
	
return 0;
}
