#include<bits/stdc++.h >
using namespace std;
char s1[110],s2[110];
int c1,c2;
int c(char a[]){
	return (a[0]-'0')*10+(a[1]-'0');
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>c1>>s1>>c2>>s2;
	
	int fl1=(c1==c2);
	if(fl1)cout<<'1';
	else cout<<'0';
	
	int fl2=(fl1&&(c(s1)==c(s2)));
	if(fl2)cout<<'1';
	else cout<<'0';
	
	int fl3=(fl2&&((s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C')));
	if(fl3)cout<<'1';
	else cout<<'0';
	
	int fl4=(fl3&&(abs(s1[2]-s2[2])==1));
	if(fl4)cout<<'1';
	else cout<<0;
	return 0;
}
