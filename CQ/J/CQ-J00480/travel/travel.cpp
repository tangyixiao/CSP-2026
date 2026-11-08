#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		string q1=s1.substr(0,2),q2=s2.substr(0,2);
		string p1=s1.substr(2,1),p2=s2.substr(2,1);
		if(q1==q2){
			cout<<1;
			if((p1<="C"&&p2<="C")||(p1>="D"&&p2>="D")){
				cout<<1;
				if(p1>p2) swap(p1,p2);
				if(p1=="A"&&p2=="B"||p1=="B"&&p2=="C"){
					cout<<1;
				}else if(p1=="D"&&p2=="F"){
					cout<<1;
				}else cout<<0;
			}else cout<<"00";
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}

