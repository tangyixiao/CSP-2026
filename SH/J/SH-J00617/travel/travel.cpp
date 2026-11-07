#include<bits/stdc++.h>
using namespace std;
int v(string a,string b){
	for(int i=0;i<2;i++){
		if(a[i]!=b[i]){
			return 0;
		}
	}
	return 1;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	int f1=0,f2=0,f3=0;
	cin>>a>>b>>c>>d;
	if(v(a,c)){
		cout<<"1";
		f1=1;
	}
	else cout<<"0"; 
	if(v(b,d)&&f1==1){
		cout<<"1";
		f2=1;
	}
	else cout<<"0";	
	if((b[2]<='C'&&d[2]<='C'||b[2]>='D'&&d[2]>='D')&&f2==1){
		cout<<"1";
		f3=1;
	}
	else cout<<"0";	f3=0;
	if(abs(b[2]-d[2])==1&&f3==1){
		cout<<"1";
	}
	else cout<<"0";	
	return 0;
}
