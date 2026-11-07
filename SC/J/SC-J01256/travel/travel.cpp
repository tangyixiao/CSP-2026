#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool f;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	f=1;
	for(int i=0;i<2;i++){
		if(c1[i]!=c2[i]){
			f=0;
			break;
		}
	}
	if(f){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	f=1;
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<1;
		if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>='D'&&s2[2]>='D')){
			cout<<1;
			if(abs(s1[2]-s2[2])==1){
				cout<<1;
			}else{
				cout<<0;
				return 0;
			}
		}else{
			cout<<"00";
			return 0; 
		}
	}else{
		cout<<"000";
		return 0;
	}
	return 0;
}