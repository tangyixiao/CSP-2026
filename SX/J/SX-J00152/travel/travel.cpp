#include <bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
bool n1 = 0,n2 = 0,n3 = 0,n4 = 0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		n1 = 1;
	}else if(c1 != c2){
		n1 = 0;
	}
	int f1 = 0,f2 = 0;
	for(int i = 0;i < s1.size();i++){
		if(s1[i] >= '0' && s1[i] <= '9'){
			f1 += s1[i] - '0';
		}else if(i == 0 && s1[i] == '1'){
			f1 +=10;
		}
	}
	for(int i = 0;i < s2.size();i++){
		if(s2[i] >= '0' && s2[i] <= '9'){
			f2 += s2[i] - '0';
		}else if(i == 0 && s2[i] == '1'){
			f2 +=10;
		}
	}
	if(f1 == f2 && n1 == 1){
		n2 = 1;
	}else{
		n2 = 0;
	}
	char ff1,ff2;
	for(int i = 0;i < s1.size();i++){
		if(s1[i] >= 'A' && s1[i] <= 'F'){
			ff1 = s1[i];
		}
	}
	for(int i = 0;i < s2.size();i++){
		if(s2[i] >= 'A' && s2[i] <= 'F'){
			ff2 = s2[i];
		}
	}
	if(ff1 >= 'A' && ff1 <= 'C'){
		if(ff2 >= 'A' && ff2 <= 'C' && ff1 != ff2){
			if(n1 == 1 && n2 == 1){
				n3 = 1;
			}
		}
	}else if(ff1 == 'D' || ff1 == 'F'){
		if((ff2 == 'D' || ff2 == 'F') && ff1 != ff2){
			if(n1 == 1 && n2 == 1){
				n3 = 1;
			}
		}
	}
	if(ff1 == 'A' && ff2 == 'B' || ff1 == 'B' && ff2 == 'A'){
		if(n1 == 1 && n2 == 1 && n3 == 1){
			n4 = 1;
		}
	}else if(ff1 == 'B' && ff2 == 'C' || ff1 == 'C' && ff2 == 'B'){
		if(n1 == 1 && n2 == 1 && n3 == 1){
			n4 = 1;
		}
	}else if(ff1 == 'D' && ff2 == 'F' || ff1 == 'F' && ff2 == 'D'){
		if(n1 == 1 && n2 == 1 && n3 == 1){
			n4 = 1;
		}
	}
	cout << n1 << n2 << n3 << n4;
	return 0;
}