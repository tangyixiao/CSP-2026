#include<bits/stdc++.h>
using namespace std;

int n, a[200003], p, l, r;
char le[200003], c;
long long ans;

int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>a[i]>>le[i];
	}
	
	l=1; r=n;
	
	while(l<r){
		int k=a[l];
		while(k>0){
			if(k>=a[r]){
				if(le[l]!=le[r]) ans+=a[r];
				k-=a[r]; r--;
			}
			else{
				if(le[l]!=le[r]) ans+=k;
				a[r]-=k;
				k=0; 
			}
		}
		l++;
	}
	
	cout<<ans;
	
	return 0;
}
