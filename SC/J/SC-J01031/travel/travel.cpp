#include<bits/stdc++.h>
using namespace std;
bool fun1(string a,string b){
	for(int i=0;i<2;i++){
		if(a[i]!=b[i]){
			return false;
		}
	}
	return true;
}
bool fun2(string a,string b){
	if(fun1(a,b)){
		for(int i=0;i<3;i++){
			if(i<2){
				if(a[i]!=b[i]){
					return false;
				}
			}else{
				if(a[i]==b[i]){
					return false;
				}
			}
		}
		return true;
	}
	return false;
}
bool fun3(string a,string b){
	if(fun2(a,b)){
		if((a[2]>='A'&&a[2]<='C')&&(b[2]>='A'&&b[2]<='C')){
			return true;
		}
		if((a[2]=='F'||a[2]=='D')&&(b[2]=='F'||b[2]=='D')){
			return true;
		}
		return false;
	}
	
	return false;
}
bool fun4(string a,string b){
	if(fun3(a,b)){
		if((a[2]-'A')-(b[2]-'A')==1||(b[2]-'A')-(a[2]-'A')==1){
			return true;
		}
		return false;
	}
	return false;
} 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,c1,s2,c2;
	cin>>c1>>s1>>c2>>s2;
	cout<<fun1(c1,c2)<<fun2(s1,s2)<<fun3(s1,s2)<<fun4(s1,s2); 
	return 0;
}