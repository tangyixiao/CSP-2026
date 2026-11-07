#include <bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a=0;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1==c2){
		a++;
	}
	if(a==1){
		cout << 1111;
	}
	else{
		for(int i=1;i<=4;i++){
			cout << 0;
		}
	}
	
	return 0;
}
