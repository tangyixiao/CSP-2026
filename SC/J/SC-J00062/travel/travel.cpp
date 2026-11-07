#include<bits/stdc++.h>
using namespace std;
string a1,a2,b1,b2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>b1>>b2;
	if(a1!=b1){
		cout<<"0000";
	}
	else{
		if(a2[0]!=b2[0] || a2[1]!=b2[1]){
			cout<<"1000";
		}
		else{
			if(a2[2]-'A'<3 && b2[2]-'A'<3 || a2[2]-'A'>3 && a2[2]-'A'>3){
				if(abs(a2[2]-'A'-(b2[2]-'A'))==1) cout<<"1111";
				else cout<<"1110";
			}
			else cout<<"1100";
		}
	}
	fclose(stdout);
	fclose(stdin);
	return 0;
}