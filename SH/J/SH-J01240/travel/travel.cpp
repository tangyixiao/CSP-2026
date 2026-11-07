#include <bits/stdc++.h>
using namespace std;
int n1,n2,m1,m2;
char a,b;
int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>n1>>n2>>a>>m1>>m2>>b;
	
	int x=a-'A';
	int y=b-'A';
	if(x>y)  swap(x,y);
	
	if(n1==m1){
		cout<<1;
	}
	else{
		cout<<"0000";
		return 0; 
	}
	
	if(n2==m2){
		cout<<1;
	}
	else{
		cout<<"000";
		return 0;
	}
	
	if((x==0&&y==1)||(x==0&&y==2)||(x==1&&y==2)||(x==3&&y==5))
	cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	
	if(x==0&&y==2)
	cout<<0;
	else
	cout<<1;
	
	return 0;
} 
