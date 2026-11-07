#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string c11,s11,c21,s21;
	cin>>c11>>s11>>c21>>s21;
	int c1=0,s1=0,c2=0,s2=0;
	for(int i=0;i<c11.size();i++) c1=c1*10+c11[i]-'0';
	for(int i=0;i<c21.size();i++) c2=c2*10+c21[i]-'0';
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	for(int i=0;i<s11.size()-1;i++) s1=s1*10+s11[i]-'0';
	for(int i=0;i<s21.size()-1;i++) s2=s2*10+s21[i]-'0';
	if(s1!=s2){
		cout<<"000";
		return 0;
	}
	cout<<"1";
	int op1=s11[s11.size()-1]-'A'+1,op2=s21[s21.size()-1]-'A'+1;
	if((op1>=4&&op2>=4)||(op1<=3&&op2<=3)) cout<<"1";
	else{
		cout<<"00";
		return 0;
	}
	if((op1>=1&&op2>=4)||(abs(op1-op2)==1)) cout<<"1";
	else cout<<"0";
	return 0;
}