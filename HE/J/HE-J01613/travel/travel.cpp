#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool res[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		res[0]=true;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			res[1]=true;
			if(s1[2]<'E'&&s2[2]<'E'||s1[2]>'E'&&s2[2]>'E'){
				res[2]=true;
				if(s1.back()-s2.back()==1||s1.back()-s2.back()==-1||(s1.back()=='D'&&s2.back()=='F')||(s1.back()=='F'&&s2.back()=='D')){
					res[3]=true;
				}
			}
		}
	}

	for(int i=0;i<=3;i++){
		if(res[i]){
			cout<<"1";
		}else{
			cout<<"0";
		}
	}
	return 0;
}
