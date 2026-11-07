#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	else{
		string qq1=s1.substr(0,2),qq2=s2.substr(0,2);
		if(qq1!=qq2){
			cout<<"1000";
			return 0;
		}
		else{
			int pp1=s1[2]-'A'+1,pp2=s2[2]-'A'+1;
			if(pp1>=4){
				if(pp2>=4) cout<<"1111";
				else cout<<"1100";
			}
			else{
				if(pp2>=4) cout<<"1100";
				else if(abs(pp1-pp2)==1) cout<<"1111";
				else cout<<"1110";
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
}
