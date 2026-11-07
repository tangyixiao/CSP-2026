#include<bits/stdc++.h>
using namespace std;
int check1(string a,string b){
	if(a == b) return 1;
	else return 0;
}
int check2(string a,string b){
	if(a[0] + a[1] == b[0] + b[1]) return 1;
	else return 0;
}
int check3(string a,string b){
	if((a[2] >= 'A' && a[2] <= 'C') && (b[2] >= 'A' && b[2] <= 'C') || (a[2] >= 'D' && a[2] <= 'F') && (b[2] >= 'D' && b[2] <= 'F')) return 1;
	else return 0;
}
int check4(string a,string b){
	if((a[2] >= 'D' && a[2] <= 'F') && (b[2] >= 'D' && b[2] <= 'F') || abs((int)a[2]-b[2]) == 1) return 1;
	else return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(check1(c1,c2)) cout << 1;
	else cout << 0;
	if(check1(c1,c2) && check2(s1,s2)) cout << 1;
	else cout << 0;
	if(check1(c1,c2) && check2(s1,s2) && check3(s1,s2)) cout << 1;
	else cout << 0;
	if(check1(c1,c2) && check2(s1,s2) && check3(s1,s2) && check4(s1,s2)) cout << 1;
	else cout << 0;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
