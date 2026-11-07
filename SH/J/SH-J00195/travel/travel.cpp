#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
bool f1=false,f2=false,f3=false,f4=false;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if (c1==c2){
		f1=true;
		if (s1[0]==s2[0]&&s1[1]==s2[1]){
			f2=true;
			if ((s1[2]<='C'&&s2[2]<='C')||((s1[2]>='D'&&s1[2]<='E')&&(s2[2]>='D'&&s2[2]<='E'))){
				f3=true;
				if (!((s1[2]=='A'&&s2[2]=='C')||(s1[2]=='C'&&s2[2]=='A'))){
					f4=true;
				}
			}
		}
	}
	cout<<f1<<f2<<f3<<f4<<'\n';
	return 0;
}
