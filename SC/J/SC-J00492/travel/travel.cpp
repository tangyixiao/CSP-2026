#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	for(int i=0;i<s1.size()-1;i++){
		if(s1[i]!=s2[i]){
			cout<<"000";
			return 0;
		}
	}
	cout<<"1";
	if(('A'<=s1[2] && s1[2]<='c' && 'D'<=s2[2] && s2[2]<='F') || ('D'<=s1[2] && s1[2]<='F' && 'A'<=s2[2] && s2[2]<='C')){
		cout<<"00";
		return 0;
	}
	cout<<"1";
	if(abs(s1[2]-s2[2])!=1){
		cout<<"0";
		return 0;
	}
	cout<<"1";
	return 0;
} 