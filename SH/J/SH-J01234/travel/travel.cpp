#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	//q1
	bool q3;
	q3=(c1==c2);
	cout<<q3;
	//q2
	q3=q3&(stoi(s1.substr(0,2))==stoi(s2.substr(0,2)));
	cout<<q3;
	//q3
	//cout<<stoi(s1.substr(0,2))<<stoi(s2.substr(0,2))<<endl;
	//bool q3=(c1==c2)&&(stoi(s1.substr(0,2))==stoi(s2.substr(0,2)));
	string a1=s1.substr(2);
	string a2=s2.substr(2);
	//cout<<a1<<' '<<a2<<'\n';
	if(q3!=0){
		if(!((a1[0]>='A'&&a2[0]<='C'&&a1[0]<='C'&&a2[0]>='A')||
		(a1[0]>='D'&&a2[0]<='E'&&a1[0]<='E'&&a2[0]>='D')))q3=0;
	}
	cout<<q3;
	//q4
	if(q3!=0)
	if((!(abs(a1[0]-a2[0])==1)))q3=0;
	cout<<q3; 
	return 0;
} 

