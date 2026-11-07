#include<bits/stdc++.h>
#define int long long
using namespace std;
inline int read(){
	int l=0,r=1;char ch=getchar();
	while(ch<'0'||ch>'9')	if(ch=='-')	r=-1;ch=getchar();
	while(ch>='0'&&ch<='9')	l=l*10+ch-'0';ch=getchar();
	return l*r;
}
string s,s1,_s,_s1;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s>>s1>>_s>>_s1;
	if(s==_s){
		cout<<'1';
		if(s1[1]==_s1[1]){
			cout<<'1';
			if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'
			&&_s1[2]=='A'||_s1[2]=='B'||_s1[2]=='C'){
				cout<<'1';
				if(abs(s1[2]-_s1[2])==1&&s1[2]!='D'&&_s1[2]!='D'){
					cout<<'1';
				}else if(s1[2]=='D'||s1[2]=='F'&&_s1[2]=='D'||_s1[2]=='F'){
					cout<<'1';
				}else	cout<<'0';
			}else if(s1[2]=='D'||s1[2]=='F'&&_s1[2]=='D'||_s1[2]=='F'){
				cout<<"11";
			}else{
				cout<<"00";
			}
		}else	cout<<"000";
	}
	else	cout<<"0000";
	
	return 0;
} 
