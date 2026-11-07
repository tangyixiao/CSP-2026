#include<bits/stdc++.h>
using namespace std;

int main() {
	
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	string x1, x2, y1, y2;
	cin >> x1 >> x2 >> y1 >> y2;
	
	string s = x2.substr(0, 2);
	string s2 = y2.substr(0, 2);
	
	//cout << s << " " << s2 << endl;
	
	int x = x2[2] - 'A';
	int y = y2[2] - 'A';
	
	x = (x > 2);
	y = (y > 2);
	
	//printf("%d%d\n", x, y);
	
	
	int t = abs(x2[2] - y2[2]);
	
	if(x1 == y1){
		printf("1");
	
		if(s == s2){
			printf("1");
			
			if(x == y){
				printf("1");
			}else {
				printf("0");
			}
			
			if(t == 1 || x2[2] == 'F' && y2[2] == 'D' || x2[2] == 'D' && y2[2] == 'F'){
			
				if(x2[2] == 'D' && y2[2] == 'C' || x2[2] == 'C' && y2[2] == 'D'){
					printf("0");	
				}else {
					printf("1");
				}
			
			}else {
				printf("0");
			}
			
		}else {
			printf("000");
		}

	
	}else {
		printf("0000");
	}
	
	
	return 0;
}
