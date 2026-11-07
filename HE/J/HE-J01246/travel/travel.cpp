#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	bool flag[4]={};
	int c1,c2,s1,s2;
	char a1,a2;
	cin>>c1>>s1>>a1;
	cin>>c2>>s2>>a2;
	if(c1==c2){
		flag[0]=1;
	}
	if(flag[0]&&s1==s2){
		flag[1]=1;
	}
	if(flag[1]){
		if(a1<=67&&a2<=67){
			flag[2]=1;
		}else if(a1>67&&a2>67){
			flag[2]=1;	
		}
	}
	if(flag[2]){
		if(a1<=67&&(a1-a2)*(a1-a2)==1){
			flag[3]=1;
		}else if(a1>67){
			flag[3]=1;
		}
	}
	for(int i=0;i<4;i++){
		if(flag[i]){
			cout<<"1";
		}else{
			cout<<"0";
		}
	}
	return 0;
}  
