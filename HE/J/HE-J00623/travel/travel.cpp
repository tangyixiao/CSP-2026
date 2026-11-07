#include<bits/stdc++.h>
#include<cstring>
#include<string>
using namespace std;
int a[5];
string c1,c2;
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		a[1]=1;
	}else{
		a[1]=0;
	}
//	cout<<s1[0]<<" "<<s2[0]<<" "<<s1[1]<<" "<<s2[1]<<endl;
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&a[1]==1){
		a[2]=1;
	}else{
		a[2]=0;
	}
	if(a[2]==1&&a[1]==1){
		if('A'<=s1[2]&&s1[2]<='C'&&'A'<=s2[2]&&s2[2]<='C'){
			a[3]=1;
		}else if('D'<=s1[2]&&s1[2]<='F'&&'D'<=s2[2]&&s2[2]<='F'){
			a[3]=1;
		}else{
			a[3]=0;
		}
	}else{
		a[3]=0;
	}
	if(a[3]==1&&a[1]==1&&a[2]==1){
		if((s1[2]-s2[2])==1||(s1[2]-s2[2])==-1){
			a[4]=1;
		}else{
			a[4]=0;
		}
	}else{
		a[4]=0;
	}
	cout<<a[1]<<a[2]<<a[3]<<a[4];
	return 0;
} 

