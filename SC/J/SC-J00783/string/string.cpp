#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,s=0,t=0;
	string b,c;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b;
		s+=a[i];
		for(int j=1;j<=a[i];j++){
			c+=b;
		}
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	if(s%2==0){
		int z=s/2;
		for(int i=1;i<=z;i++){
			if(c[z-i]!=c[z+i-1]){
				t++;
			}
		}
	}else{
		int z=s/2;
		for(int i=1;i<=z;i++){
			if(c[z-i]!=c[z+i]){
				t++;
			}
		}
	}
	cout<<t;
	
	return 0;
} 
