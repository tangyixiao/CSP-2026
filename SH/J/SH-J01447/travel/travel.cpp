#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=10009;
int c1,c2;
string s1,s2;
bool ok1,ok2,ok3,ok4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		ok1=1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			ok2=1;
			if(s1[2]<='C'&&s2[2]<='C'||s1[2]>='D'&&s2[2]>='D'){
				ok3=1;
				if(s1[2]+1-'A'==s2[2]-'A'||s1[2]-1-'A'==s2[2]-'A')
					ok4=1;
			}
		}
	}
	if((s1[2]=='D'&&s2[2]=='F')||(s1[2]=='F'&&s2[2]=='D')) ok4=1;
	cout<<ok1<<ok2<<ok3<<ok4<<endl;
	return 0;
}

