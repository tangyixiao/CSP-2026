#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	

	int a[4];
	a[1]=0;
	a[2]=0;
	a[3]=0;
	a[4]=0;

	char s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	if(s1==s3){
		a[1]=1;	
	}
	
	if(a[1]==1&&s2-s4>=-5||s2-s4<=5){
		a[2]=1;
		
	}
	
	if(a[2]==1&&s2-s4>=-2||s2-s4<=2){
		a[3]=1;
		
	}
	
	if(a[3]==1&&s2-s4==1||s2-s4==-1){
		a[4]=1;
		
	}
	
		cout<<a[1]<<a[2]<<a[3]<<a[4];
	
	
	return 0;
}
