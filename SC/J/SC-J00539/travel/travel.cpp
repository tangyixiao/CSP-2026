#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
char a[3]={'A','B','C'};
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]==c2[0]){
		if(c1[1]==c2[1]){
			cout<<1;
		}else{
			cout<<"0000";
			return 0;
		}
	}else{
		cout<<"0000";
		return 0;
	}
	for(int i=0;i<2;i++){
		if(s1[i]!=s2[i]){
			cout<<"000";
			return 0;
		}
	}cout<<1;
	bool b=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(s1[2]==a[i]&&s2[2]==a[j]){
				b=1;
				cout<<1;
				break;
			}
		}
		if(b)break;
	}if(!b){
		cout<<"00";
		return 0;
	}
	
	if(char(s1[2]-1)==s2[2]&&s2[2]!='D'||s1[2]==char(s2[2]-1)&&s1[2]!='D')cout<<1;
	else cout<<0;
}