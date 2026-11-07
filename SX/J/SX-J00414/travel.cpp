#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string asd,bsd,answer[4] = {0,0,0,0};
	cin >> a >> asd >> b >> bsd;
	if (a == b){
		answer[0] = "1";
	}
	if(asd[0] == bsd[0]&&asd[1] == bsd[1]){
		answer[1] = "1";
}
for(int i = 1;i <= 4;i++)
cout << answer[i];
	fclose(stdin);
	fclose(stdout);
 return 0;
}































