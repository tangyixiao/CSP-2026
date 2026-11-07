#include<bits/stdc++.h>
using namespace std;
int pcx(string a,string b){
	if(a == b){
		return 1;
	}else{
		return 0;
	} 
}
int ptp(string a,string b){
	if(a[0] == b[0] && a[1] == b[1]){
		return 1;
	}else{
		return 0;
	}
}
int ptc(string a,string b){
	if(a[2] >= 'D' && b[2] >= 'D' || a[2] <= 'C' && b[2] <= 'C'){
		return 1;
	}else{
		return 0;
	}
}
int pxl(string a,string b){
	char ma,mi;
	if(a[2] < b[2]){
		ma = b[2];
		mi = a[2];
	}else{
		ma = a[2];
		mi = b[2];
	}
	if(ma - 1 == mi){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(pcx(c1,c2)){
		if(ptp(s1,s2)){
			if(ptc(s1,s2)){
				if(pxl(s1,s2)){
					cout << "1111";
				}else{
					cout << "1110";
				}
			}else{
				cout << "1100";
			}
		}else{
			cout << "1000";
		}
	}else{
		cout << "0000";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
