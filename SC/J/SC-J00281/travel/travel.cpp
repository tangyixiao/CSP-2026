#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;

int main(){
	freopen("travel.in","r",stdin);	
	freopen("travel.out","w",stdout);	
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000"<<endl;
		return 0;
	}
	cout<<1;
	string pai1,pai2;
	pai1+=s1[0]+s1[1];
	pai2+=s2[0]+s2[1];
	if(pai1!=pai2){
		cout<<"000"<<endl;
		return 0;
	}
	cout<<1;
	if(abs(s1[2]-s2[2])==2&&max(s1[2],s2[2])=='D'){
		cout<<"00"<<endl;
		return 0;
	}
	else if(abs(s1[2]-s2[2])>2){
		cout<<"00"<<endl;
		return 0;
	}
	else if(max(s1[2],s2[2])=='D'){
		cout<<"00"<<endl;
		return 0;
	}
	cout<<1;
	if(abs(s1[2]-s2[2])==1||max(s1[2],s2[2])=='F'){
		cout<<1<<endl;
		return 0;
	}
	else cout<<0<<endl;
	return 0;
}
