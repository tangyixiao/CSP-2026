#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","W",stdout);
	string c1,c2,c3,c4;
	int sum=4;
	cin >>c1>>c2>>c3>>c4;
	if(c1==c3){
		cout <<1;
		sum--;
		if(c2[1]==c4[1] && c2[2]==c4[2]){
			cout <<1;
			sum--;
			if(c2[3]=='F' || c2[3]=='D' && c4[3]=='A' || c4[3]=='B' || c4[3]=='C'){
				for(int i=1;i<=sum;i++) cout <<0;
			}else if(c4[3]=='F' || c4[3]=='D' && c2[3]=='A' || c2[3]=='B' || c2[3]=='C'){
				for(int i=1;i<=sum;i++) cout <<0;
			}else{
				cout <<1;
				sum--;
				if(c2[3]=='A' && c4[3]=='C' || c4[3]=='A' && c2[3]=='C'){
					cout << 0;
				}else{
					cout <<1;
				}
			}
		}else{
			for(int i=1;i<=sum;i++) cout <<0;
		}
	}else{
		for(int i=1;i<=sum;i++) cout <<0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
