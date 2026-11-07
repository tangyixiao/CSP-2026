#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a[n];
	string c[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		cin>>c[i];
	}
	for(int i=0;i<n;i++){
		if(c[i]==c[i+1]){
			cout<<0;
			break;
		}else{
			cout<<a[0];
			break;
		}
	}
	return 0;
}