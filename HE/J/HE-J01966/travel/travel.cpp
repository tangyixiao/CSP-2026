#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	cin>>c1>>c2>>s1>>s2; 
	if(c1==c2){
		cout<<'1';
	}
	for(int i=0;i<=s1.size();i++){
		for(int j=0;j<=s2.size();j++){
			if(s1[i+j]==s2[j]){
				cout<<'1';
			}
		}
	}
	return 0;
} 
