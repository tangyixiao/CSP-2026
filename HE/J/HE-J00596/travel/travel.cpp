#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);
	string c1,c2,c3,c4;
	cin>>c1>>c2>>c3>>c4;
	
	bool t1=false,t2=false,t3=false,t4=false;
	if(c2==c4){
		cout<<"0000"<<endl;
		return 0;
	}
	if(c1[1]==c3[1]){
		t1=true;
	}
	if(c2[1]==c4[1]){
		t2=true;
	}
	int a,b;
	if(c2[2]>='A'&&c2[2]<='C'){
		a=1;
	}
	if(c4[2]>='A'&&c4[2]<='C'){
		b=1;
	}
	if(c2[2]=='D'||c2[2]=='F'){
		b=2;
	}
	if(c4[2]=='D'||c4[2]=='F'){
		b=2;
	}
	if(t2&&(a==b)){
		t3=true;
	}
	if((c2[1]-c4[1])==0&&(abs(c2[2]-c4[2])==1)&&t3){
		t4=true;
	}
	cout<<t1<<t2<<t3<<t4<<endl;
	return 0;
	
}
