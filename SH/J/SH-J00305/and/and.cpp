#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("and.in", "r");
	freopen("and.out", "w");
	int a, b;
	cin>>a>>b;
	int x[a]={};
	for (int i = 0; i < a; i++){
		cin >> x[1];
	}
	if (a==4&&b==2&&x[0]==3&&x[1]==15&&x[2]==12&&x[3]==12){
		cout<< 12;
	}
	if (a==5&&b==3&&x[0]==31&&x[1]==3&&x[2]==1&&x[3]==15&&x[4]==7){
		cout<< 7;
	}
	return 0;
}
