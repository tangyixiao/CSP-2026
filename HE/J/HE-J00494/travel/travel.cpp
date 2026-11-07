#include<bits/stdc++.h>
using namespace std;
bool st(string a,string b){
	if(a==b)
	return true;
	else
	{
		cout<<"0000"<<endl;
		return 0;
	}
}
bool nd(string a,string b){
	if(a[0]==b[0]&&a[1]==b[1])
	return true;
	else{
		cout<<"1000"<<endl;
	return 0;	
	}
}
bool rd(string a,string b){
	if((a[2]<='C'&&b[2]<='C')||(a[2]>'C'&&b[2]>'C'))
	return true;
	else{
		cout<<"1100"<<endl;
		return 0;
	}
}
bool th(string a,string b){
	if(a[2]>b[2]){
		if(a[2]-b[2]==1&&a[2]!='F')
		return true;
		else if(a[2]=='F'&&b[2]=='D')
		return true;
		else{
			cout<<"1110"<<endl;
			return 0;
		}
	}
	else{
		if(b[2]-a[2]==1||b[2]!='F')
		return true;
		else if(b[2]=='F'&&a[2]=='D')
		return true;
		else{
			cout<<"1110"<<endl;
			return 0;
		}
	}
}
int main(){
freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
    cin>>c1>>s1>>c2>>s2;
	if(st(c1,c2)&&nd(s1,s2)&&rd(s1,s2)&&th(s1,s2))
	cout<<"1111"<<endl;
fclose(stdin);
fclose(stdout);
	return 0;
}
