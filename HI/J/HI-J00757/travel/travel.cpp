
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","r",stdout);
	int n,a[5],b[5];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	if(a[1]=b[1]){
		cout<<1;
		if(a[2]+'0'+1=b[2]+'0'&&a[2]+'0'-1=b[2]+'0'){
			cout<<1;
		}else
	}else{
		cout<<"0000";
		return 0;
	} 
	return 0;
}
