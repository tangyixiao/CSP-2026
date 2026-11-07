#include<bits/stdc++.h>
using namespace std;
string c1,s1;
string c2,s2;
int main(){
    freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)   cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	int l=s1.length();
	for(int i=0;i<l-1;i++){
		if(s1[i]!=s2[i]){
			cout<<"000";
			return 0;
		}
	}
	cout<<1;
	if(s1[l-1]>='A'&&s1[l-1]<='C' && s2[l-1]>='A'&&s2[l-1]<='C'){
		cout<<1;
		if(abs(int(s1[l-1])-int(s2[l-1]))==1)   cout<<1;
		else   cout<<0;
	}
	else if(s1[l-1]>='D'&&s1[l-1]<='F' && s2[l-1]>='D'&&s2[l-1]<='F'){
		cout<<"11";
	}
	else   cout<<"00";
	return 0;
	fclose(stdin);
	fclose(stdout);
}
