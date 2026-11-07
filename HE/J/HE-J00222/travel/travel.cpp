#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3,s4;
bool is_l(int a){
	return a>=1&&a<=3;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>s3>>s4;
	if(s1!=s3){
		cout<<"0000\n";
		return 0;
	}
	if(s2[0]!=s4[0]||s2[1]!=s4[1]){
		cout<<"1000\n";
		return 0;
	}
	int a=s2[2]-'A'+1,b=s4[2]-'A'+1;
	if(a==6) a=5;
	if(b==6) b=5;
	if(!((is_l(a)&&is_l(b))||((!is_l(a))&&(!is_l(b))))){
		cout<<"1100\n";
		return 0;
	}
	if(abs(a-b)!=1){
		cout<<"1110\n";
		return 0;
	}
	cout<<"1111\n";
	fclose(stdin); fclose(stdout);
	return 0;
} 
