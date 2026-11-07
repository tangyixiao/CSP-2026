#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b, sum = 0;
	string x,y;
	bool flog1 = 0,flog2 = 0;
	cin>>a>>x>>b>>y;
	if(a == b){
		sum++;
		cout<<1;
		if(x[0] == y[0] && x[1] == y[1]){
				cout<<1;
				sum++;
			if(x[2] >= 'A' && x[2] <= 'C'){
				flog1 = 1;
			}
			if(y[2] >= 'A' && y[2] <= 'C'){
				flog2 = 1;
			}
			if(flog1 == flog2){
				cout<<1;
				sum++;
				if(abs(x[2] - y[2]) == 1){
					cout<<1;
					sum++;
				}
			}
		}
	}
	for(int i = sum;i <= 3;i++){
		cout<<0; 
	}
	return 0;
}
