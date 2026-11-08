#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
char s[10]={'A','B','C','D','F'};
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<'1';
	else{
		cout<<"0000";
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]) cout<<'1';
	else {
		cout<<"000";
		return 0;
	}
	int a1,a2;
	for(int i=0;i<5;i++){
		if(s[i]==s1[2]) a1=i;
		if(s[i]==s2[2]) a2=i;
	}
	if((a1<3&&a2<3)||(a1>=3&&a2>=3)) cout<<'1';
	else {
		cout<<"00";
		return 0;
	}
	if(abs(a1-a2)==1&&(a1!=2&&a2!=3)&&(a1!=3&&a2!=2)) cout<<'1';
	else cout<<'0';
	return 0;
}
