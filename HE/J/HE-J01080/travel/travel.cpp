#include<bits/stdc++.h> 
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool b1=0,b2=0,b3=0;
	if(c1==c2){
		cout<<1;
		b1=1;
	}else{
		cout<<0;
	}
	
	if(b1==1&&(s1[0]+s1[1])==(s2[0]+s2[1])){
		cout<<1;
		b2=1;
	}else{
		cout<<0;
	}
	
	if(b2==1&&((s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')||(s1[2]>='D'&&s1[2]<='E'&&s2[2]>='D'&&s2[2]<='E'))){
		cout<<1;
		b3=1;
	}else{
		cout<<0;
	}
	
	if(b3==1&&((s1[2]-s2[2]==1)||(s2[2]-s1[2]==1))){
		cout<<1;
	}else{
		cout<<0;
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
