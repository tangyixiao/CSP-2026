#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a[3],ou[10];
	char b,c;
	cin>>a[0]>>a[1]>>b>>a[2]>>a[3]>>c;
	if(a[0]!=a[2]){
		ou[1]=0;
	}else if(a[0]==a[2]){
		ou[1]=1;
	}
	if(a[1]==a[3]){
		ou[2]==1;
	}else{
		ou[2]==0;
	} 
	if(b=='A'||b=='B'||b=='C'&&c=='A'||c=='B'||c=='C'){
		ou[3]=1;
		if(b==c+1||b==c-1){
			ou[4]=1;
		}else ou[4]=0;
	}else if(b=='D'||b=='F'&&c=='D'||c=='F'){
		ou[3]=1;
		ou[4]=1;
	}else{
		ou[3]=0;
		ou[4]=0;
	}
	if(ou[1]==0){
		cout<<"0000";
	}else if(ou[2]==0){
		cout<<"1000";
	}else if(ou[3]==0){
		cout<<"1100";
	}else if(ou[1]!=0&&ou[2]!=0&&ou[3]!=0){
		cout<<ou[1]<<ou[2];
		cout<<ou[3]<<ou[4];
	}
	return 0;
	fclose(stdin);
	fclose(stdout);
} 