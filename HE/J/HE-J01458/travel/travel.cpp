#include<bits/stdc++.h>
using namespace std;
string a1,a2,s1,s2,cnt;
void f(){
	cout<<cnt;
	for(int i=0;i<4-cnt.size();i++){
		cout<<"0";
	}
	return;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>s1>>s2;
	if(a1==s1){
		cnt+='1';
	}else{
		f();
		return 0;	
	} 
	if(a2[1]==s2[1]){
		cnt+='1';
	}else{
		f();
		return 0;
	}
	if(a2[2]>='D'&&s2[2]>='D'||a2[2]<'D'&&s2[2]<'D'){
		cnt+='1';
	}else{
		f();
		return 0;
	}
	if(a2[2]-s2[2]==1||a2[2]-s2[2]==-1){
		cnt+='1';
	}
	f();
	return 0;
} 
