#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travle.in.txt","r",stdin);
	freopen("travle.out.txt","w",stdout);
	string a,b,a1,b1;
	cin>>a>>a1>>b>>b1;
	if(a==b){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	string x,x1,y,y1;
	x=a1[0]+a1[1];
	y=b1[0]+b1[1];
	x1=a1[2];
	y1=b1[2];
	if(x==y){
		cout<<"1"; 
	}else{
		cout<<"000";
		return 0;
}
	if((x1=="A"||x1=="B"||x1=="C")&&(y1=="A"||y1=="B"||y1=="C")||((x1=="D"||x1=="F")&&(y1=="D"||y1=="F"))){
		cout<<'1';
	}else{
		cout<<"00";
		return 0;
	}
	if((x1=="A"&&y1=="C")||(x1=="C"&&y1=="A")){
		cout<<'0';
	}else{
		cout<<'1';
	}
	 
	return 0;
} 