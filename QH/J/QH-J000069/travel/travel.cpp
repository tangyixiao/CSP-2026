#include<bits/stdc++.h>
using namespace std;
int n,m;
string a[5],b[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdin);
	cin>>n;
	for(int i = 0;i<4;i++){
		cin >>a[i];
	}
	cin>>m;
	for(int i = 0;i<4;i++){
		cin >>b[i];
	} 
	if(n==m){
		cout <<1;
	}
	else{
		cout<<0;
	}
	for(int i = 0;i<2;i++){ 
		if(a[i]==b[i]){
			cout<<1;
		}
		else{
			cout<<0;
		}
	}
	for(int i = 2;i<3;i++){
		if((a[i]=="A"||a[i]=="B"||a[i]=="C")&&(b[i]=="A"||b[i]=="B"||b[i]=="C")){
			cout<<1;
		}
		else if((a[i]=="D"||a[i]=="F")&&(b[i]=="D"||b[i]=="F")){
			cout<<1;
		}
		else{
			cout<<0;
		}
	}
	for(int i = 2;i<3;i++){
		if((a[i]=="A"&&b[i]=="B")||(a[i]=="B"&&b[i]=="C")||(a[i]=="D"&&b[i]=="F")){
			cout<<1;
		}
		else{
			cout<<0;
		}
	}
	return 0;
} 
