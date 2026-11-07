#include<bits/stdc++.h>
#define ll long long
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	bool flag1=false;
	bool flag2=false;
	bool flag3=false;
	int n1=(c1[0]-'0')*10+c1[1]-'0';
	int n2=(c2[0]-'0')*10+c2[1]-'0';
	if(n1==n2){
		cout<<1;
		flag1=true;
	}
	else cout<<"0000";
	if(flag1==true){
		int p1=(s1[0]-'0')*10+s1[1]-'0';
		int p2=(s2[0]-'0')*10+s2[1]-'0';
		if(p1==p2){
			cout<<1;
			flag2=true;
		}	
		else cout<<"000";	
		if(flag2==true){
			if(s2[2]=='A'){
				if(s1[2]=='B'||s1[2]=='C'){
					cout<<1;
					flag3=true;
				} 
				else cout<<"00";
			} 
			else if(s2[2]=='B'){
				if(s1[2]=='A'||s1[2]=='C'){
					cout<<1;
					flag3=true;
				}
				else cout<<"00";
			}
			else if(s2[2]=='C'){
				if(s1[2]=='A'||s1[2]=='B'){
					cout<<1;
					flag3=true;
				}
				else cout<<"00";
			}
			else if(s2[2]=='D'){
				if(s1[2]=='F'){
					cout<<1;
					flag3=true;
				}
				else cout<<"00";
			}
			else if(s2[2]=='F'){
				if(s1[2]=='D'){
					cout<<1;
					flag3=true;
				}
				else cout<<"00";
			}
			if(flag3==true){
				if(s1[2]=='A'){
					if(s2[2]=='B')cout<<1;
					else cout<<0;
				}
				else if(s1[2]=='B'){
					if(s2[2]=='C'||s2[2]=='A')cout<<1;
					else cout<<0; 
				}
				else if(s1[2]=='C'){
					if(s2[2]=='B')cout<<1;
					else cout<<0;
				}
				else if(s1[2]=='D'){
					if(s2[2]=='F')cout<<1;
					else cout<<0;
				}
				else if(s1[2]=='F'){
					if(s2[2]=='D')cout<<1;
					else cout<<0;
				}
			}
		}
	}
	return 0;
}
