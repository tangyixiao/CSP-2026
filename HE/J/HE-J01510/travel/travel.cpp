#include<bits/stdc++.h>
using namespace std;
string c[1001];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string i;	
	string j;	
	string s;	
	string k;
	cin>>i;
	cin>>j;
	cin>>s;
	cin>>k;				
	if(i==s){
		cout << 1;
	}else if(i!=s){
		cout << 0;
	}else{
		cout << 0;
	}
	if(j==k){
		cout << 1;
	}else if(j!=k){
		cout << 1;
	}else{
		cout << 0;
	}
	if(s==i){
		cout << 1;
	}else if(s!=i){
		cout << 0;
	}else{
		cout << 0;
	}
	if(k==j){
		cout << 1;
	}else if(k!=j){
		cout << 0;
	}else{
		cout << 0;
	}
	return 0;
}
