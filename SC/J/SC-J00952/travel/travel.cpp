#include<bits/stdc++.h>
using namespace std;
int main(){
	
using namespace std;
int main(){
	freopen("travel1.in","r",stdin);
	freopen("travel1.out","w",stdout);
	char c1[100],s1[100],c2[100],s2[100];
	cin>>c1>>c2>>s1>>s2;
	if(c1[1]==s1[1]){
		cout<<'1';
	if(c2[1]==s2[1]){
		cout<<'1';
		if(!(c2[2]=!'C'&&s2[2]!='D')&&(c2[2]!='D'&&s2[2]!='C')){
				cout<<'1';
		    if(c2[2]+1==s2[2]){
			cout<<'1';
		    }
		    else{
		    	cout<<'0';
			}
		}
		else{
			cout<<"00";
		}
	}
	else{
		cout<<"000";
	}
}
else{
	cout<<"0000";
}
fclose(stdin);
	fclose(stdout);
	return 0;
}