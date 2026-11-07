#include<bits/stdc++.h>
#define int long long
using namespace std;
string c1,s1,c2,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		string col1="";
		string col2="";
		col1+=s1[0];col1+=s1[1];
		col2+=s2[0];col2+=s2[1];
		if(col1==col2){
			char se1=s1[2];
			char se2=s2[2];
			if(((se1=='A'||se1=='B'||se1=='C')&&(se2=='D'||se2=='E'))||
			   ((se2=='A'||se2=='B'||se2=='C')&&(se1=='D'||se1=='E')))
			{//在异侧。
				cout<<"1100\n";
			}else{//在同侧。
				if((se1=='A'&&se2=='C')||(se1=='C'&&se2=='A'))
				{
					cout<<"1110\n";
				}else{
					cout<<"1111\n";
				}
			}
		}else{
			cout<<"1000\n";
		}
	}else{
		cout<<"0000\n";
	}
	return 0;
}