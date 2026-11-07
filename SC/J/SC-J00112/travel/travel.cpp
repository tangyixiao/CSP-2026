#include<bits/stdc++.h>
using namespace std;
int c1,c2;
char s1[3],s2[3];
bool check3(){
	int a1=s1[2]-'C';
	int a2=s2[2]-'C';
	if(a1>0&&a2>0)return 1;
	if(a1<0&&a2<0)return 1;
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000"<<endl;
		return 0;
	}else{
		cout<<"1";
		if(s1[0]==s2[0]&&s1[1]==s2[1])cout<<"1";
		else{
			cout<<"000"<<endl;
			return 0;
		}
		if(check3())cout<<"1";
		else{
			cout<<"00"<<endl;
			return 0; 
		}
		if(abs(s1[2]-s2[2])==1){
			cout<<"1"<<endl;
			return 0;
		}
		else{
			cout<<"0"<<endl;
			return 0;
		}
	}
}