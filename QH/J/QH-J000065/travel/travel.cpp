#include<bits/stdc++.h>
using namespace std;
int main(){ 
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a[100000];
	for(int i=0;i<=3;i++){
		cin>>a[i];	
	}
	if(a[0]==a[2]){
		cout<<1<<endl;
		if(a[1]!=a[3]){
			cout<<1<<endl<<1<<endl<<1;
			if(a[1]==a[3]){
				cout<<1<<endl<<1;
			}
		}
		else{
			cout<<0<<endl<<0<<endl<<0;
		}
	}
	else{
		cout<<0<<endl<<0<<endl<<0<<endl<<0;
	}
}

