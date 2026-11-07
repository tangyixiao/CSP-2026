#include<bits/stdc++.h>
using namespace std;
int rbox;
int xbox;
char r[105];
char x[105];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
cin>>rbox;
for(int i=1;i<4;i++){
	cin>>r[i];
}
cin>>xbox;
for(int i=1;i<4;i++){
	cin>>x[i];
} 
if(rbox==xbox){
	cout<<1;
}	
else{
	cout<<0;
	cout<<0;
	cout<<0;
	cout<<0;
	return 0;
}

if(r[1]+r[2]==x[1]+x[2]){
	cout<<1;
}
else{
	cout<<0;
	cout<<0;
	cout<<0;
	return 0;
}

if((r[3]=='A'||r[3]=='B'||r[3]=='C')&&(x[3]=='A'||x[3]=='B'||x[3]=='C')){
	cout<<1;
}
else if((r[3]=='D'||r[3]=='F')&&(x[3]=='D'||x[3]=='F')){
	cout<<1;
}
else{
	cout<<0;
	cout<<0;
	return 0;
}
if(x[3]-r[3]==1||r[3]-x[3]==1){
	if((r[3]=='C',x[3]=='D')||(x[3]=='C',r[3]=='D')){
		cout<<0;
	}
	else{
		cout<<1;
	}
}
else if((r[3]=='F',x[3]=='D')||(x[3]=='F',r[3]=='D')){
	cout<<1;
}
else{
	cout<<0;
}
	return 0;
}

