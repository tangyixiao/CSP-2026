#include <bits/stdc++.h>
using namespace std;
const int N=10;
char b[N],d[N];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	bool tongche,flag,tongce,xianglin;
	int a;
	cin>>a;
	
	for(int i=1;i<=3;i++){
		cin>>b[i];
	}
	int c;
	cin>>c;
	
	for(int i=1;i<=3;i++){
		cin>>d[i]; 
	}
	if(a==c){cout<<"1";tongche=true;}
	else{
		cout<<"0000";
		return 0;
		}
	if(b[1]==d[1]&&b[2]==d[2]){
		cout<<"1";
		flag=true;
	}
	else{cout<<"0";}
	if(flag){
		if(b[3]=='D'&&d[3]=='F'||b[3]=='F'&&d[3]=='D'){
			tongce=true;
		}
		else if(b[3]=='A'&&d[3]=='B'||b[3]=='A'&&d[3]=='C'||b[3]=='B'&&d[3]=='A'||b[3]=='B'&&d[3]=='C'||b[3]=='C'&&d[3]=='A'||b[3]=='C'&&d[3]=='B'||d[3]=='A'&&b[3]=='B'||d[3]=='A'&&b[3]=='C'||d[3]=='B'&&b[3]=='A'||d[3]=='B'&&b[3]=='C'||d[3]=='C'&&b[3]=='A'||d[3]=='C'&&b[3]=='B'){
			tongce=true;
		}
		else if(b[3]=='C'&&d[3]=='D'||d[3]=='C'&&b[3]=='D'){
			tongce=false;
		}
		else 
			tongce==false;
	}
	if(tongce==true){cout<<"1";}
	else{cout<<"0";}
	if(tongce==true&&abs(b[3]-d[3])==1){
		xianglin=true;
	}
	else if(b[3]=='C'&&d[3]=='D'||d[3]=='C'&&b[3]=='D'){
		xianglin=false;
	}
	if(xianglin){
		cout<<"1";
	}
	if(!xianglin){
		cout<<"0";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
