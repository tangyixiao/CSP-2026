#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",std.in);
	freopen("string.out","w",std.out);
	int n;
	cin>>n;
	vector<int>a(n+1); 
	vector<int>v(n+1);
	v[0]=0;
	vector<string>b(n+1); 
	int zh;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		v[i]=a[i]+v[i-1];
		
	}
	for(int i=1;i<=n;i++){
		if(v[i]>=v[n]/2){
			zh=i;
			cout<<v[n]-v[zh];
			break;
		}
	}
	
	
	
	
	
	
	
	return 0;
} 
