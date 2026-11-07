#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,p1,c2,p2;
	char w1,w2;
	bool f1=0,f2=0,f3=0,f4=0;
	cin >> c1 >> p1 >> w1 >> c2 >> p2 >> w2;
	if(c1==c2){
		f1=1;
		if(p1==p2){
			f2=1;
			if(((w1=='A'||w1=='B'||w1=='C') && (w2=='A'||w2=='B'||w2=='C'))||((w1=='D'||w1=='E') && (w2=='D'||w2=='E'))){
				f3=1;
				if(w1+1==w2 || w2+1==w1){
					f4=1;
				}
			}
		}
	}
	cout << f1 << f2 << f3 << f4;
	return 0;
}