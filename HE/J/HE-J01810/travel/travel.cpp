#include <bits/stdc++.h>
using namespace std;
bool q1,q2,q3,q4;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2; 
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		q1=1;
	}else{
		cout<<q1<<q2<<q3<<q4;
		return 0;
	}
	int w1=s1[1]+s1[0];
	int w2=s2[1]+s2[0];
	if(w1==w2){
		q2=1;
	}else{
		cout<<q1<<q2<<q3<<q4;
		return 0;
	}
	int p1=s1[2]-'0',p2=s2[2]-'0';
	int cha=p1-p2;
	if(cha<0){
		cha*=-1;
	}
	if(p1<=19&&p2<=19){
		q3=1;
		if(cha==1){
			q4=1;
		}
	}
	if(p1>19&&p2>19){
		q3=1;
		q4=1;
	}
	cout<<q1<<q2<<q3<<q4;
	return 0;
}
