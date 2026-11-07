#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>c2>>s2;
	int n=c1.length();
	for(int i=1;i<=n;i++){
		if(c1[i]==c2[i]){
			cout<<"1";
		}else{
			cout<<"0";
		}
	}
	int s=s1.length();
	for(int i=1;i<s;i++){
		if(s1[i]==s2[i]){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
	}

	return 0;
	
}
