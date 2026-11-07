#include<iostream>
#include<cstdio>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		int a1=(s1[0]-'0')*10+(s1[1]-'0');
		int b1=(s2[0]-'0')*10+(s2[1]-'0');
		if(a1==b1){
			cout<<"1";
			int a=(s1[2]-'A')+1;
			int b=(s2[2]-'A')+1;
			if(a<=3 && b<=3){
				cout<<"1";
				if(a-b==1 || a-b==-1) cout<<"1"<<endl;
				else cout<<"0"<<endl;
			}
			else if(a>3 && b>3){
				cout<<"1";
				if(a-b==2 || a-b==-2) cout<<"1"<<endl;
				else cout<<"0"<<endl;
			}
			else cout<<"00"<<endl;
			
		}
		else{
			cout<<"000"<<endl;
		}
	}
	else{
		cout<<"0000"<<endl;
	}
	fclose(stdin);fclose(stdout);
} 
