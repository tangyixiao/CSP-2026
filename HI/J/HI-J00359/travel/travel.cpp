#include <iostream>
#include <cmath>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2;
	int n,m;
	bool a[4] = {0,0,0,0} ;
	cin >> n;
	cin >>s1;
	cin >> m;
	cin >>s2;
	if(n==m)
	{
		a[0] = 1;
		int p1,p2;
		p1 = (s1[0]-'0') *10+(s1[1] - '0');
		p2 = (s2[0]-'0') *10+(s2[1] - '0');
		if(p1==p2){
			a[1] =1;
			if(!((s1[2]=='D'&&s2[2]=='C')||(s1[2]=='C'&&s2[2]=='D'))){
			
				a[2] = 1;
				 if(abs(s1[2] - s2[2])==1)
				 {
				 	a[3] = 1;
				 }
				 else {
				 	a[3] = 0;
				 }
			}
			else{
				a[2] = 0;
			}
		}
		else {
			a[1] = 0;
		}
	}
	else{
		a[0] =0;
	}
	for(int i =0;i <4;i++){
		cout <<a[i];
	}
	return 0;
}
