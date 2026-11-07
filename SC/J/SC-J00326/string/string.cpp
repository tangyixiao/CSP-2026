#include<bits/stdc++.h> 
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	int a[20];
	string c[20];
	int cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	if(n==1){
		cout<<"0";
		return 0;
	}
	if(n==2){
		if(c[1]==c[2]){
			cout<<"0";
			return 0;
		} 
		if(a[1]>=a[2]){
			cout<<a[2];
			return 0;
		}
		if(a[1]<a[2]){
			cout<<a[1];
			return 0;
		}
		
	}
	return 0;
}