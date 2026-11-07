#include<bits/stdc++.h>
using namespace std;
const int Maxn = 1e6+10;
char read[20];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	fgets(read,30,stdin);
	if(read[0] != read[7]||read[1] != read[8]){
		cout << "0000";
		return 0;
	}
	if(read[3] != read[10]||read[4] != read[11]){
		cout << "1000";
		return 0;
	}
	char c1 = read[5],c2 = read[12];
	if((c1 <= 'C'&&c2 <= 'C')||(c1 >= 'D'&&c2 >= 'D')){
		if(c1 == c2+(c2 == 'D'?2:1)||c2 == c1+(c1 == 'D'?2:1)){
			cout << "1111";
			return 0;
		}
		else{
			cout << "1110";
			return 0;
		}
	}
	else{
		cout << "1100";
		return 0;
	}
	return 0;
} 