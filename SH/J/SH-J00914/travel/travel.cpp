#include<bits/stdc++.h>
using namespace std;
int a,b,arr[10][10] = {
	{0,1,1,0,0,0},
	{1,0,1,0,0,0},
	{1,1,0,0,0,0},
	{0,0,0,0,0,1},
	{0,0,0,0,0,0},
	{0,0,0,1,0,0}};
string s1,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a >> s1 >> b >> s2;
	if(a == b){
		cout << "1";
		if(s1[0] == s2[0] && s1[1] == s2[1]){
			cout << "1";
			if((s1[2] - s2[2] == 1 || s1[2] - s2[2] == -1) && min(s1[2],s2[2]) != 'C') cout << "11";
			else if(arr[s1[2] - 'A'][s2[2] - 'A']) cout << "10";
			else cout << "00";
		}
		else cout << "000";
	}
	else cout << "0000";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
