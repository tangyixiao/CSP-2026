#include <bits/stdc++.h>
using namespace std;

int main(){
//	freopen("travel.in","r",stdin); 嗯对注释了
//	freopen("travel.out","w",stdout);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	int n1,n2;
	cin >> c1 >> s1 >> c2 >> s2;
	string S = "ABCDF";
	for(int i=0;i<5;i++){
		if(s1[2] == S[i]) n1 = i;
		if(s2[2] == S[i]) n2 = i;
	}
	if(c1 != c2){
		cout << 0000;
		return 0;
	}
	else{
		if(s1[0] != s2[0] || s1[1] != s2[1]){
			cout << 1000;
			return 0;
		} 
		else{
			if(!((n1<=2&&n2<=2)||(n1>2&&n2>2))){
				cout << 1100;
				return 0;
			} 
			else if((n1==3&&n2==4)||(n1==4&&n2==3)){
				cout << 1111;
				return 0;
			}
			else if(abs(n1-n2) == 1 && (n1 != 3 && n2 != 3)){
				cout << 1111;
			}
			else{
				cout << 1110;
				return 0;
			}
		}
	}
	return 0;
}