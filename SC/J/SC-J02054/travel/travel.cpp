#include<bits/stdc++.h>
using namespace std;

string m,M;
string n,N;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>m>>n>>M>>N;
	if(m==M){
		cout<<true;
	}else{
		cout<<false<<false<<false<<false;
		exit(0);
	}
	if(n[0]==N[0]&&N[1]==n[1]){
		cout<<true;
	}else{
		cout<<false<<false<<false;
		exit(0);
	}
	if(n[2]<='C'&&N[2]<='C'||n[2]>='D'&&N[2]>='D'){
		cout<<true;
	}else{
		cout<<false<<false;
		exit(0);
	}
	if(n[2]+1==N[2]||N[2]+1==n[2]){
		cout<<true;
	}else{
		cout<<false;
	}
	return 0;
}