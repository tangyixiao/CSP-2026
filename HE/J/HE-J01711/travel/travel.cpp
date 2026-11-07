#include<bits/stdc++.h>

using namespace std;

int main(){
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	int c1,c2;
	string s1,s2
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
	}else{
		cout<<"0";
	}
	if(s1[0]==s2[0] and s1[1]==s2[1]){
		cout<<"1";
		if(s1[2]<"D" and s2[2]<"D"){
		cout<<"1";
		}else if(s1[2]>"C" and s2[2]>"C"){
			cout<<"1";
		}else{
			cout<<"0";
	}else{
		cout<<"0";
	}
	if(s1[2]-s2[2]==1){
		cout<<"1";
	}else{
		cout<<"0";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}

