#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
    int n;
    cin>>n;
    int a[20002];
    char b[20002];
    for(int i=0;i<n;i++){
    	cin>>a[i]>>b[i];
	}
	if(n==1){
		cout<<"0";
		return 0;
	}
	if(n==2){
		if(b[0]==b[1]){
			cout<<"0";
			return 0;
		}
		if(a[0]>=a[1]&&a[1]==1){
			cout<<a[1];
		}else{
			cout<<a[0];
		}
	}
   return 0;
} 
