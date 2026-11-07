#include<bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	char a[10001];
	for(int i=1;i<=4;i++){
		cin>>a[i];
	}
	
	for(int i=1;i<=4;i++){
		if(a[1]==a[3]){
			cout<<"1";
		}else{
			cout<<"0";
		}
		if(a[2]/10==a[4]/10){
			cout<<"1";
		}else{
			cout<<"0"; 
		}
		if((a[1]%10==a[2]%10-1)||(a[1]%10==a[2]%10-2)){
			cout<<"1";
		}else{
			cout<<"0";
		}
		if(a[1]%10==a[2]%10-1){
			cout<<"1";
		}else{
			cout<<"0";
		}
	}
	
	
	
	
	
	return 0;
}
