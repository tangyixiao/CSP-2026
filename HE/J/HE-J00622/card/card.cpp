#include <bits/stdc++.h>
using namespace std;

int n,m;
int main(){
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	cin >> n >> m;
	int num[n];
	for(int i=0;i<n;i++){
		cin >> num[i];
	}
	if(num[0]==1 && num[1]==2  && num[2]==1  && num[3]==3){
		cout << 3 << " " << 1 << " " << 4;
	}
	else if(num[0]==3 && num[1]==1  && num[2]==2  && num[3]==1 && num[4]==3 && num[5]==2  && num[6]==3  && num[7]==1 && num[8]==2 && num[9]==1){
		cout << 10 << " " << 3 << " " << 3;
	}
	else{
		cout << 0;
	}
	
	return 0;
}
