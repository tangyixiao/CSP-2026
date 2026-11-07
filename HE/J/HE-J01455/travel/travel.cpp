#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    string s,a,v,d;
	cin>>s>>a>>v>>d; 
	if(s!=v){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	if(a[0]==d[0]&&a[1]==d[1]){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	if(((a[2]=='A'||a[2]=='B'||a[2]=='C')&&(d[2]=='B'||d[2]=='A'||d[2]=='C'))||((a[2]=='F'||a[2]=='D')&&(d[2]=='F'||d[2]=='D'))){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	int x,y;
	if(a[2]=='F'){
	x=a[2]-'A';
	}else{
	x=a[2]-'A'+1;
    }
	if(d[2]=='F'){
	y=d[2]-'A';
	}else{
	y=d[2]-'A'+1;
    }
	if(x+1==y||y+1==x){
		cout<<1;
	}else{
		cout<<0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
