
#include<bits/stdc++.h> 
using namespace std;
string c1,s1,c2,s2;
int a1,a2,m,n;
int b1,b2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		a1=(s1[0]-'0')*10+(s1[1]-'0');
		a2=(s2[0]-'0')*10+(s2[1]-'0');
		
		if(a1==a2){
			cout<<"1";
			b1=s1[2];
			b2=s2[2];
			
			if(b1>=68&&b2<=67){
				cout<<"00";
				return 0;
			}
			else if(b2>=68&&b1<=67){
				cout<<"00";
				return 0;
			}
			else{
				cout<<"1";
				if(b1==65&&b2==66){
					cout<<"1";
					return 0;
				}
					if(b1==66&&b2==65){
					cout<<"1";return 0;
				}
					if(b1==67&&b2==66){
					cout<<"1";return 0;
				}
					if(b1==66&&b2==67){
					cout<<"1";return 0;
				}
					if(b1==68&&b2==70){
					cout<<"1";return 0;
				}
					if(b1==70&&b2==68){
					cout<<"1";return 0;
				}
				else{
					cout<<"0";return 0;
				}
			}
		}
		else{
			cout<<"000";
			return 0;
		}
	}
	else{
		cout<<"0000";
		return 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;	
}
