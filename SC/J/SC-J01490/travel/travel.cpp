#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int t1,t2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<1;
	else{
		cout<<"0000";
		return 0;
	} 
	t1=(s1[0]-'0')*10+(s1[1]-'0');
	t2=(s2[0]-'0')*10+(s2[1]-'0');
	if(t1==t2) cout<<1;
	else{
		cout<<"000";
		return 0;
	} 
	if((s1[2]<='C' && s2[2]<='C') || (s1[2]>='D' && s2[2]>='D')){
		cout<<1;
	}
	else{
		cout<<"00";
		return 0;
	}
	char a=s1[2]+1,b=s2[2]+1;
	if(a==s2[2] || s1[2]==b){
		cout<<1;
	} 
	else cout<<0;
	return 0;
}