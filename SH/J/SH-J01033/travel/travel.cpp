#include<iostream>
#include<string>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,c;
	char b[5]={0};char d[5]={0};
	cin>>a;
	for(int i=1;i<=3;i++){
		cin>>b[i];
	}cin>>c;
	for(int i=1;i<=3;i++){
		cin>>d[i];
	}
	if(a!=c){
		cout<<"0000";
		return 0;
	}else{
		if(a==c) cout<<1;
		if(b[1]==d[1]&&b[2]==d[2]){
			cout<<1;
		}if(b[1]!=d[1]||b[2]!=d[2]){
			cout<<"000";
			return 0;
		}
		if(b[3]=='D'&&d[3]=='F') cout<<11;
		else if(d[3]=='D'&&b[3]=='F')  cout<<11;
		else if(b[3]=='A'&&d[3]=='B')  cout<<11;
		else if(d[3]=='A'&&b[3]=='B')  cout<<11;
		else if(b[3]=='B'&&d[3]=='C')  cout<<11;
		else if(d[3]=='B'&&b[3]=='C')  cout<<11;
		else if(b[3]=='A'&&d[3]=='C')  cout<<10;
		else if(d[3]=='A'&&b[3]=='C')  cout<<10;
		else cout<<"00"; 
	}
	return 0;
} 
