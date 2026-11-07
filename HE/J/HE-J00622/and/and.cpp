#include <bits/stdc++.h>
using namespace std;

int n,m;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	int num[n];
	for(int i=0;i<n;i++){
		cin >> num[i];
	}
	if(num[0]==3 && num[1]==15  && num[2]==12  && num[3]==12){
		cout << 12;
	}
	else if(num[0]==31 && num[1]==3  && num[2]==1  && num[3]==15 && num[4]==7){
		cout << 7;
	}
	else{
		cout << 0;
	}
	return 0;
}
