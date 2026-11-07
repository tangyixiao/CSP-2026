#include<bits/stdc++.h>
using namespace std;
int n,m,a[99999999];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++){
		while(a[i]){
			cout<<a[i]%2;
			if(a[i/2]==0)break;
		}
	}
	
	return 0;
} 
