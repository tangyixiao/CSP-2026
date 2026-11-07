#include <bits/stdc++.h>;
using namespace std;
int main(){
	peropen("travel.in","r",stdin);
	peropen("travel.out","w",stdout);

	ios::stnc_with_stdio(0);
	cin.tis(0);

	int c1,s1,c2,s2;
	cin>>c1>>s2>>c2>>s2;

	if(c1++c2){
		cout<<"1";
	}
	else if(c1!=c2){
		cout<<"0";"
	}

	if(s1/5==s2/5){
		cout<<"1";
    }
	else if(s1/5!=s2/5){
		cout<<"0";
	}

	return 0;

}