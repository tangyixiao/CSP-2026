#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string x1,y1,x,y;
	cin>>x>>x1>>y>>y1;
	if(x=="01"||x=="16"||y=="01"||y=="16"){
		cout<<"0000";
		return 0;
	}else if(x!=y){
		cout<<"0000";
		return 0;
    }else{
		cout<<1;
	}
	for(int i=0;i<2;i++){
		if(x1[i]!=y1[i]){
			cout<<"000";
			return 0;
		}
	}
	cout<<1;
	if((x1[2]<='C'&&y1[2]>='D')||(y1[2]<='C'&&x1[2]>='D')){
		cout<<"00";
		return 0;
	}else{
		cout<<1;
	}
	if((y1[2]-x1[2]==1)||(x1[2]-y1[2]==1)){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
