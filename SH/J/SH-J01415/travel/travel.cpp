#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int num1,num2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	num1=s1[2]-'A'+1;
	num2=s2[2]-'A'+1;
	if(c1==c2)cout<<1;
	else{
		cout<<"0000";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1])cout<<1;
	else{
		cout<<"000";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	if(num1>3&&num2>3){
		cout<<"11";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	else if((num1<=3&&num2>3)||(num1>3&&num2<=3)){
		cout<<"00";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	else if(num1<=3&&num2<=3){
		if((num1==1&&num2==3)||(num1==3&&num2==1))cout<<"10";
		else cout<<"11";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
