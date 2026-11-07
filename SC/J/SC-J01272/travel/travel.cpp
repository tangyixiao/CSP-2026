#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool x=true,y=true,z=true;
	for(int i=0;i<2;i++){
		if(c1[i]!=c2[i]){
			x=false;
			cout<<"0";
			break;
		}
	}
	if(x){
		cout<<"1";
	}
	for(int j=0;j<2;j++){
		if(s1[j]!=s2[j]||x==0){
			y=false;
			cout<<"0";
			break;
		}
	}
	if(y){
		cout<<"1";
	}
	char n=max(s1[2],s2[2]);
	char m=min(s1[2],s2[2]);
	int s=n-m;
	if(s<3&&(n<='C'||m>='D')&&y==1&&x==1){
		cout<<"1";
	}else{
		cout<<"0";
		z=false;
	}
	if(s==1&&(n<='C'||m>='D')&&x==1&&y==1&&z==1){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
}