#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[5]={0};
	string c1,c2,s1,s2;
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1;
	cin>>s1;
	cin>>c2;
	cin>>s2;
	if(c1==c2){
		a[1]=1;
	}
	if(s1[0]==s2[0] && s1[1]==s2[1]){
		a[2]=1;
		} 
	if(s1[2]=='A'||s1[2]=='B' ||s1[2]=='C'){
			if(s2[2]=='A'||s2[2]=='B' ||s2[2]=='C')
			a[3]=1;
	}
		if(s1[2]=='F'||s1[2]=='D' ){
			if(s2[2]=='F'||s2[2]=='D' )
			a[3]=1;
	}
			
	if (a[1]==1 && a[2]==1&& a[3]==1){
		cout<<"1111";
	}
	if (a[1]==1 && a[2]==1&&a[3]!=1){
		cout<<"1100";
	}
	if (a[1]==1 && a[2]!=1&&a[3]!=1){
		cout<<"1100";
	}
	fclose(stdin);
		fclose(stdout);
	return 0;
}
