#include<bits/stdc++.h>
using namespace std;
string n1,n2,m1,m2;
int main(){
//	freopen("travel.in","r",stdin);
//	freopen("travel.out","w",stdout);
	cin>>n1>>n2>>m1>>m2;
	if(n1!=m1){
		cout<<"0000";
		return 0;
	}
	else{
		cout<<'1';
		string p=n2,q=m2;
		p.erase(2,1);
		q.erase(2,1);
		if(p!=q){
			cout<<"000";
			return 0;
		}
		else{
			cout<<'1';
			char p1=n2[2],q1=m2[2];
			if((p1<='C'&&q1<='C')||(p1>='D'&&q1>='D')){
				cout<<'1';
				int p2=int(p1)-65,q2=int(q1)-65;
				if(p2==6) p2--;
				if(q2==6) q2--;
				if(abs(p2-q2)==1){
					if((p2<=3&&q2<=3)||(p2>=4&&q2>=4)) cout<<'1';
					else cout<<'0';
				}
				if(abs(p2-q2)!=1) cout<<'0';
			}
			else{
				cout<<"00";
				return 0;
			}
		}
	}
	return 0;
}
