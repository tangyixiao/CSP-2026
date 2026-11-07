#include <bits/stdc++.h>
using namespace std;
map<char,int> a;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	string c1,c2,c3,c4;
	cin >> c1 >> c2 >> c3 >> c4;
	if(c1==c3){
		cout << 1;
	}
	else{
		cout << "0000";
		return 0;
	}
	string m="";
	m+=c2[0];
	m+=c2[1];
	string n="";
	n+=c4[0];
	n+=c4[1];
	if(m==n){
		cout << 1;
	}
	else{
		cout << "000";
		return 0;
	}
	if((c2[2]<='C'&&c4[2]<='C')||(c2[2]>='D'&&c4[2]>='D')){
		cout << 1;
	}
	else{
		cout << "00";
		return 0;
	}
	a['A']=1,a['B']=2,a['C']=3,a['D']=5,a['F']=6;
	char s1=c2[2],s2=c4[2];
	cout << ((abs(a[s1]-a[s2])==1)?1:0);
	return 0;
}