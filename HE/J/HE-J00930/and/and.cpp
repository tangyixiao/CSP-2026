#include<bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	int a[1000001],s[1000001];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
	    while(a[i]!=0){
	    	s[i]=a[i]%2;
		    a[i]/2;
		}
	}
	
	cout<<s[i];
	
	
	
	
	
	
	return 0;
} 
