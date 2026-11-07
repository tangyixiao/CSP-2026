#include<bits/stdc++.h>
using namespace std;
int ans[5];
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
    char a[4],b[4];
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)ans[1]=1;
	else{
	ans[1]=0;
	}
	
	for(int i=0;i<3;i++){
	a[i]=s1[i];	
	b[i]=s2[i];
	}
	if(ans[1]==0){
		cout<<"0000";
		return 0;
	}
	
	if(a[0]==b[0]&&a[1]==b[1]){
		ans[2]=1;
	}	
	else{
	ans[2]=0;
	}
	if(ans[2]==0){
		cout<<1000;
		return 0;
	}
	
	if(a[2]>='A'&&a[2]<='C'&&b[2]>='A'&&b[2]<='C'){
	ans[3]=1; 	
	}
	else if(a[2]>='D'&&a[2]<='F'&&b[2]>='D'&&b[2]<='F'){
	ans[3]=1;
	}
	else{
		ans[3]=0;
	}
	if(ans[3]==0){
		cout<<1100;
		return 0;
	}
	
	if(a[2]<='F'&&a[2]>='D'&&b[2]<='F'&&b[2]>='D'){
		if(ans[2]==1){
			ans[4]=1;
		}
		
		else{
		ans[4]=0;
		}
			
	}
	else{
	if(a[2]+1==b[2]||a[2]-1==b[2]){
		ans[4]=1;
	}
	else{
		ans[4]=0;
	}
	}
	
	if(ans[4]==1){
		cout<<1111;
	}
	else{
		cout<<1110;
	}
return 0;
}
