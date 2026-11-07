#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
map<char,int>a;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	a['A']=1;a['B']=2;a['C']=3;a['D']=4;a['F']=5;
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(s1[0]==s2[0]&&s1[1]==s2[1]){
		cout<<1;
	}
	else{
		cout<<"000";
		return 0;
	}
	if((s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')||(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F')){
		cout<<1;
	}
	else{
		cout<<"00";
		return 0;
	}
	if((a[s1[2]]-a[s2[2]]==1||a[s1[2]]-a[s2[2]]==-1)&&(s1[2]!='D'||s2[2]!='C')&&(s1[2]!='C'||s2[2]!='D')){
		cout<<1;
	}
	else cout<<0;
	return 0;
}