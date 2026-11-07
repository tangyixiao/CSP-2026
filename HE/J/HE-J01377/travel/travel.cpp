#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c,cc;
	string s,ss;
	cin>>c>>s>>cc>>ss;
	if(c!=cc){
		cout<<"0000";
	}
	else {
		cout<<1;
		if(s[0]==ss[0]&&s[1]==ss[1]){
			cout<<1;
			if(((s[2]>='A'&&s[2]<='C')&&(ss[2]>='A'&&ss[2]<='C'))||((s[2]>='D'&&s[2]<='E')&&(ss[2]>='D'&&ss[2]<='E'))){
				cout<<1;
				int a=s[2]-'A';
				int b=ss[2]-'A';
				if(abs(a-b)==1){
					cout<<1;
				}
				else{
					cout<<0;
				}
			}
			else{
				cout<<0<<0;
			}
		}
		else{
			cout<<"000";
		}
	}
	fclose(stdin);
	fclose(stdout); 
	return 0;
} 
