#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int flg=0;
	int f=0; 
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) {
		cout<<1;
		f=1;
	}
	else cout<<0;
	if(s1[1]==s2[1] && s2[0]==s1[0] &&f==1) {
		cout<<1;
		flg=1;
	}
	else cout<<0;
	int z1=s1[2]-'A';
	int z2=s2[2]-'A';
	if(((z1<3 && z2 <3) || (z1>=3 && z2>=3)) && flg==1 &&f==1){
		cout<<1;
	}else{
		cout<<0;
	}
	if(abs(z1-z2)==1 && (z1!=3 && z2!=4) &&(z1!=4 && z2!=3) && flg==1 && f==1){
		cout<<1;
	}
	else cout<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
