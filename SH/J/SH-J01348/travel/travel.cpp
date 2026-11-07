#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		cout << 1;
	}else{
		cout << "0000";
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	int cnt = 0;
	bool flag = 0,oneside = 0;
	for(int i = 0;i <= 3;i++){
		if((s1[i] >= '0' && s1[i] <= '9') && (s2[i] >= '0' && s2[i] <= '9') && s1[i] == s2[i]){
			cnt++;
		}
	}
	if((abs(s1[2] - s2[2]) == 1) && (s1[2] == 'C' || s1[2] == 'D') && (s2[2] == 'C' || s2[2] == 'D')){
		flag = 1;
	}if((s1[2] == 'F' || s1[2] == 'D') && (s2[2] == 'F' || s2[2] == 'D')){
		oneside = 1;
	}
	if(flag){
		cout << 10;
	}else if(cnt == 2){
		cout << 11;
	}else{
		cout << "000";	
		fclose(stdin);
		fclose(stdout);
		return 0;
	}
	if(flag){
		cout << 0;
	}else if(abs(s1[2] - s2[2]) == 1 || oneside == 1){
		cout << 1;
	}else{
		cout << 0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
