#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int tag=0;
	int z=0;
	if(c1[0]==c2[0]&&c1[1]==c2[1]){
		cout<<1;
	}else{
		cout<<0;
		z=1;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&z==0){
		cout<<1;
	}else{
		cout<<0;
		tag=1;
	}
	if(tag!=1){
		if(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C'&&z==0){
			cout<<1;
		}else if(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F'&&z==0){
			cout<<1;
		}else{
			cout<<0;
		}
	}else{
		cout<<0; 
	}
	int a=max(s1[2],s2[2]);
	int b=min(s1[2],s2[2]);
	if(a-b==1&&z==0){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
} 
