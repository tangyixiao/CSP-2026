#include<bits/stdc++.h>
using namespace std;
char c[6]={'A','B','C','Z','D','F'};
int main(){
	
	freopen("travel.in","r","stdin");
	freopen("travel.out","w","stdout");
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool fl=0;
	if(c1==c2){
		fl=1;
		cout<<1;
	}else cout<<0;
	bool fl2=0;
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&fl){
		fl2=1;
		cout<<1;
	}else cout<<0;
	if(fl2&&fl&&(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')||(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F')){
		cout<<1;
	}else cout<<0;
	for(int i=0;i<5;i++){
		if(s1[2]==c[i]&&fl&&fl2){
			if(s2[2]==c[i+1]||s2[2]==c[i-1]){
				cout<<1;
				return 0;
			}
		}
	}
	cout<<0;
	
	return 0;
}