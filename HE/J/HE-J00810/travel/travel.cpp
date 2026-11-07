#include<bits/stdc++.h>
using namespace std;
string b="ABCDF";
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a[10];
	for(int i=0;i<4;i++){
		a[i]=0;
	}
	string s1,s2;
	int c1,c2,s11=0,s22=0;
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<5;i++){
		if(s1[2]==b[i]) s11=i;
		if(s2[2]==b[i]) s22=i;
	}
	if(c1==c2){
		a[0]=1;
		if(s1[0]==s2[0] && s1[1]==s2[1]){
			a[1]=1;
			if(s11<=2 && s22<=2 || s11>2 && s22>2){
				a[2]=1;
				if(s11+1==s22 || s11-1==s22){
					a[3]=1;	
				}
			} 
		}
	}
	for(int i=0;i<4;i++){
		cout<<a[i];
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
