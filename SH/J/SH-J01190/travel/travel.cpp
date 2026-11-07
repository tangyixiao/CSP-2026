#include<bits/stdc++.h>
using namespace std;
std::ifstream fin("travel.in");
std::ofstream fout("travel.out");
int main(){
	string c1, s1, c2, s2;
	fin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) fout << 1;
	else{
		fout << "0000";
		return 0;
	}
	string pai_1, pai_2;
	bool flag = false;
	for (int i = 0; i < 2; i++){
		pai_1 += s1[i];
		pai_2 += s2[i];
	}
	if (pai_1 == pai_2) {
		fout << 1;
		flag = true;
	}
	if (flag == true){
		char se1 = s1[2];
		char se2 = s2[2];
		if (se1 >= 'A' && se1 <= 'C' && se2 >= 'A' && se2 <= 'C' || se1 >= 'D' && se1 <= 'F' && se2 >= 'D' && se2 <= 'F'){
			fout << 1;
		}
		else fout << 0;
		int a = se1 - 'A', b = se2 - 'A';
		if (max(a, b) - min(a, b) == 1){
			if (max(a, b) == 3 && min(a, b) == 2){
				fout << 0;
			}
			else{
				fout << 1;
			}
		}
		else{
			fout << 0;
		}
	}
	else{
		fout << "000";
	}
	
	return 0;
}
/*
02 01A 02 01B
*/
