#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1==c2){
		cout << 1;
	}
	else{
		cout << 0;
	}
	if (c1==c2&&(s1[0]==s2[0]&&s1[1]==s2[1])){
		cout << 1;
	}
	else{
		cout << 0;
	}
	int a=s1[2];
	int b= s2[2];
	if ((c1==c2)&&(s1[0]==s2[0]&&s1[1]==s2[1])&&(a+b==131||a+b==132||a+b==133||a+b==137)){
		cout << 1;
	}
	else{
		cout << 0;
	}
	if ((((c1==c2&&(s1[0]==s2[0]&&s1[1]==s2[1])&&(a+b==131||a+b==132||a+b==133||a+b==137))&&(((s1[2]=="A"&&s2[2]=="B")||(s1[2]=="B"&&s2[2]=="C"))||(s1[2]=="D"&&s2[2]=="E"))){
		cout << 1;
	}
	else{
		cout << 0;
	}
	return 0;
}
