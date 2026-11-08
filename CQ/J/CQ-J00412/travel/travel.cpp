#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("trevel","r",stdin);
	freopen("trevel","w",stdout); 
	int ans=0;
	string x,y,z,q;
	cin>>x>>y>>z>>q;
	if(x==z){
		cout<<"1";
		ans++;
	}
	else{
		cout<<"0000";
		return 0;
	}
	//Ò» 
	int sum=0;
	for(int i=0;i<=2;i++){
		if(y[i]==q[i]){
			sum++;
		}
	}
	if(sum==2){
		cout<<"1";
		ans++;
	}
	else{
		cout<<"000";
		return 0;
	}
	//¶þ
	if(ans==2){
		if(y[2]=='A'||y[2]=='B'||y[2]=='C'&&q[2]=='A'||q[2]=='B'||q[2]=='C'){
			cout<<"1";
		}
		else if(y[2]=='D'||y[2]=='F'&&q[2]=='D'||q[2]=='F'){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
	}
	//Èý
	if(y[0]!=q[0]&&y[1]!=q[1]){
		cout<<"0";
		return 0;
	}
	if(y[2]=='F'&&q[2]=='D'||q[2]=='F'&&y[2]=='D'){
		cout<<"1";
	}
	else if(y[2]=='D'&&q[2]=='C'||y[2]=='C'&&q[2]=='D'){
		cout<<"0";
	}
	else if(y[2]+1==q[2]||y[2]-1==q[2]){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	return 0; 
}
