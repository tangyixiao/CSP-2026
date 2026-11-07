#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int ans,c3,s3;
char c4,s4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>c1>>c2>>s1>>s2;
	c3=(c2[0]-'0')*10+(c2[1]-'0');
	s3=(s2[0]-'0')*10+(s2[1]-'0');
	c4=c2[2];
	s4=s2[2];
	if(c1!=s1){
		cout<<"0000";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	else{		
		if(c3!=s3){
			cout<<1000;
			fclose(stdin);
			fclose(stdout);
			return 0;
		}
		else{
			if((c4<='C'&&c4>='A'&&s4<='C'&&s4>='A')||(c4<='F'&&c4>='D'&&s4<='F'&&s4>='D')){
				if((c4+1==s4||c4-1==s4)){
					cout<<1111;
					fclose(stdin);
					fclose(stdout);
					return 0;
				}
				else{
					cout<<1110;
					fclose(stdin);
					fclose(stdout);
					return 0;
				}
			}
			else{
				cout<<1100;
				fclose(stdin);
				fclose(stdout);
				return 0;
			}
		}
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
} 