#include<bits/stdc++.h>
using namespace std;
int c1,c2,s1,s2;
char a1,a2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>a1>>c2>>s2>>a2;
	if(c1==c2) cout<<'1';
	else{
		cout<<"0000";
		return 0;
	} 
	if(s1==s2) cout<<'1';
	else{
		cout<<"000";
		return 0;
	}
	if((a1>='A'&&a1<='C')&&(a2>='A'&&a2<='C')) cout<<'1';
	else if((a1=='D'||a1=='F')&&(a2=='D'||a2=='F')) cout<<'1';
	else {
		cout<<"00";
		return 0;
	}
	if(a1+1==a2||a2+1==a1) cout<<'1';
	else cout<<'0';
	fclose(stdin);
	fclose(stdout);
	return 0;
}
