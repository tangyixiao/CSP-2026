#include<bits/stdc++.h> 
using namespace std;
int n; 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n; long long a[n],m=0;char b[n];
	for(int  i=0;i<n;i++){
		cin>>a[i]>>b[i];
		m+=a[i];
	}
	int l=0,r=n-1;long long e=0;
	while(r!=l){
		int min1=min(a[r],a[l]);
		if(b[r]==b[l]){
			a[r]-=min1;a[l]-=min1;
		}else{
			a[r]-=min1;a[l]-=min1;e+=min1;
		}
		if(a[r]==0){
			r--;
		}else{
			l++;
		}
	}
	
	cout<<e;
	return 0;
}
