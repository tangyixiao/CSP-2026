#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string A,a,B,b;
	cin >> A >> a >> B >> b;
	if(A!=B){
		cout << "0000";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	if(a[0] != b[0] || a[1] != b[1]){
		cout << "1000";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	if(!((a[2] > 'C' && b[2] > 'C')||(a[2] < 'D' && b[2] < 'D'))){
		cout << "1100";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	if(!(abs(int(a[2]-b[2])) == 1)){
		cout << "1110";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	else{
		cout << "1111";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
}
// easy~(not)
//other:hard
