#include<bits/stdc++.h>
using namespace std;
bool xs(string a,string b){
	if(a.size()!=b.size()){
		return 0;
	}
	
	for(int i=0;i<a.size();i++){
		if(a[i]!=b[i]){
			return 0;
		}
	}return 1;
	
	
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(xs(c1,c2)==0){
		cout<<"0000";
		return 0;
	}else{
		cout<<"1";
	}
	int s1s=s1[0]-'0',s2s=s2[0]-'0',s1g=s1[1]-'0',s2g=s2[1]-'0';
	if(s1s*10+s1g!=s2s*10+s2g){
		cout<<"000";
		return 0;
	}else{
		cout<<"1";
	}
	int a,b;
	if(s1[2]=='F'||s1[2]=='D'){
		a=1;
	}else{
		a=0;
	}
	if(s2[2]=='F'||s2[2]=='D'){
		b=1;
	}else{
		b=0;
	}
	if(a!=b){
		cout<<"00";
		return 0;
	}else{
		cout<<"1";
	}
	int a1=s1[2],b1=s2[2];
	if(abs(a1-b1)!=1){
		cout<<"0";
	}else{
		cout<<"1";
	}
	
	
	
	return 0;
} 