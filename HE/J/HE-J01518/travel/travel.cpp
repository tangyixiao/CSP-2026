#include<bits/stdc++.h>
using namespace std;
char a[100];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=10;i++){
		cin>>a[i];
		
	}
	if(a[2]==a[7]){
		cout<<"1";
	}
 else{
		cout<<"0";
	}
	if(a[3]==a[8]&&a[4]==a[9]){
		cout<<"1";
	
	}
	else{
		cout<<"0";
	}
	if(a[5]=='A'||a[5]=='B'||a[5]=='C'&&a[10]=='A'||a[10]=='B'||a[10]=='C'){
		cout<<"1";
	}
	else {
		cout<<"0";
	}
	if(a[5]-a[10]==1||a[10]-a[5]==1){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	return 0;
} 
