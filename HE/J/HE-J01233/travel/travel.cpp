#include<bits/stdc++.h>
using namespace std;
string x[5];
string r[5];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=2;i++){
		cin>>r[i];
	}
	for(int i=1;i<=2;i++){
		cin>>x[i];
	}
	if(r[1]!=x[1]){
		cout<<"0000";
		return 0;
	}
	else{
		cout<<1;
	}
	for(int i=0;i<r[2].size()-1;i++){
		if(r[i]==x[i]){
			cout<<1;
			break;
		}
		else{
			cout<<"000";
			return 0;
		}
	}
	cout<<0;
	cout<<0;
	return 0;
}
