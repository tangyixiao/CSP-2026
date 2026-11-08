#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin); 
	freopen("travel.out","w",stdout);
	string n;
	cin>>n;
	if(n[1]==n[8]){
	cout<< 1;	
	}
	else cout<<0;
	if(n[5]+1==n[12]||n[5]-1==n[12]){
		cout<<1;
	}
	else cout<<0;
	
	
	
	
	return 0;
}
