#include<bits/stdc++.h>
using namespace std;

string c1, c2, s1, s2;

bool is_sameside(char c1, char c2){
	if(c1<='C' and c2<='C' or c1>='D' and c2>='D') return 1;
	else return 0;
}
bool is_neighbour(char c1, char c2){
	if(c1+1==c2 or c1-1==c2) return 1;
	else return 0;
}

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	cin >> c1 >> s1 >> c2 >> s2;
	
	if(c1 == c2) printf("1");
	else printf("0");
	if(c1 == c2 and s1[0]+s1[1] == s2[0]+s2[1]) printf("1");
	else printf("0");
	if(c1 == c2 and s1[0]+s1[1] == s2[0]+s2[1] and is_sameside(s1[2], s2[2])) printf("1");
	else printf("0");
	if(c1 == c2 and s1[0]+s1[1] == s2[0]+s2[1] and is_sameside(s1[2], s2[2]) and is_neighbour(s1[2], s2[2])) printf("1");
	else printf("0");
	
	return 0;
} 
