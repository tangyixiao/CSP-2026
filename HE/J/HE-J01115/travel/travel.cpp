#include<bits/stdc++.h>
using namespace std;
bool n=false;
bool m=false;
bool fuck=false;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	string R,X,R1,X1;
	cin>>R>>R1>>X>>X1;
	//cin>>X>>R;
    for(int i=1;i<=3;i++){
		//for(int j=1;j<=4;j++){
		if(R==X){
			cout<<1;
		}else{
			cout<<0;
			return 0;
		}
		if(n=true){
			cout<<1;
		}else{
			cout<<0;
			return 0;
		}
		if(m=true){
			cout<<1;	
		}else{
			cout<<0;
			return 0;
		}
		if(fuck=true){
			cout<<1;
		}else{
			cout<<0;
			return 0;
		}
	  //}
	  return 0;
	}
	return 0;
} 
