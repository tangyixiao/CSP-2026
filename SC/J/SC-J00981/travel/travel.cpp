#include <iostream>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s,t;
	cin>>c1>>s>>c2>>t;
	if(c1!=c2){
		cout<<"0000"<<flush;
	}else{
		cout<<1<<flush;
		int s1=stoll(s.substr(0,2)),t1=stoll(t.substr(0,2));
		if(s1!=t1){
			cout<<"000"<<flush;
		}else{
			cout<<1<<flush;
			char s2=s[2],t2=t[2];
			if(((s2=='D'||s2=='F')&&(t2=='A'||t2=='B'||t2=='C'))||((t2=='D'||t2=='F')&&(s2=='A'||s2=='B'||s2=='C'))){
				cout<<"00"<<flush;
			}else{
				cout<<1<<flush;
				if((s2=='D'||s2=='F')||abs(s2-t2)==1){
					cout<<1<<flush;
				}else{
					cout<<0<<flush;
				}
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 