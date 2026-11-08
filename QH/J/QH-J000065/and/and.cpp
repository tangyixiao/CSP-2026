#include<bits/stdc++.h>
using namespace std;
int main(){ 
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[100000],x,cnt[100000],y,i=1;
	cin>>n>>m;
	x=n-2;
	for(i;i<=n;i++){
		cin>>a[i-1];
	}	
	while(x!=0) {
		if(n-x-2>=0){
			cnt[n-x] = a[n-x-2] and a[n-x-1];
		}
		if(n-x-2>0){
			if(cnt[n-x]>cnt[n-x-1]){
				y=cnt[n-x];
			}
			else{
				y=cnt[n-x-1];
			}
		} 
		x--;
	}
	cout<<y;
}

