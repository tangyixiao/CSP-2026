#include <bits/stdc++.h>
using namespace std;
string c1,c2;
string s1,s2;
int a[20][20];
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int main(){
	freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    cin >> c1 >> s1 >> c2 >> s2;
    if(c1==c2){
    	cout << 1;
	}
	else{
		cout << "0000";
		return 0;
	}
	int x1=0;
	for(int i = 0;i<2;i++){
		x1*=10;
		x1 += s1[i]-'0';
	}
	int x2=0;
	for(int i = 0;i<2;i++){
		x2*=10;
		x2 += s2[i]-'0';
	}
	int y1 = s1[2] -'A'+1;
	int y2 = s2[2]-'A'+1;
	if(y1==6) y1--;
	if(y2==6) y2--;
	if(y1>3) y1++;
	if(y2>3) y2++;
	a[y1][x1] = 1;
	a[y2][x2] = 1;
	if(x1==x2){
		cout << "1";
	}
	else{
		cout << 0;
	}
	if((y1<=3&&y2<=3 || y1>3&&y2>3) && x1 == x2){
		cout << 1;
	}
	else{
		cout << 0;
	}
	int flag = 0;
	if(x1==x2 && abs(y1-y2)==1){
		flag = 1;
	}
	/*for(int i = 0;i<4;i++){
		int nx = x1 + dx[i];
		int ny = y1 + dy[i];
		if(nx>=1 && nx<=19 && ny >= 1 && ny<=7)
		if(a[nx][ny]==1){
			flag = 1;
		}
	}*/
	cout << flag;
	/*cin >> c1 >> s1 >> c2 >> s2;
	if(c1==c2){
		cout << 1;
	}
	else{
		cout << "0000";
		return 0;
	}
	if(s1.substr(0,2)== s2.substr(0,2)){
		cout << 1;
	}
	else{
		cout << 0;
	}
	if((s1[2]-'A'<=3  && s2[2]-'A'<=3) || (s1[2]-'A'>3  && s2[2]-'A'>3)){
		cout << 1;
	}
	else{
		cout << 0;
	}
	if(abs(s1[2]-s2[2])==1){
		cout << 1;
	}
	else{
		cout << 0;
	}*/
	return 0;
} 
