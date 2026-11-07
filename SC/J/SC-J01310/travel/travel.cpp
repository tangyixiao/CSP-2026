#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
int line1,line2;
char set1,set2;
bool check(int a,int b){
	return a == b;	 
}
int get_line(string str){
	int res = 0;
	res = (str[0]-'0')*10+(str[1]-'0');
	return res;
}
char get_set(string str){
	return str[2];
}
bool check_side(char a,char b){
	int a1 = a-'A',b1 = b-'A';
	if(a1>b1)swap(a1,b1);
	if(b1 <= 2)return 1;
	if(a1 >= 3)return 1;
	return 0;
}
bool check_set(char a,char b){
	int a1 = a-'A',b1 = b-'A';
	return abs(a1-b1) == 1;
}
int same_tank,same_line,same_side,near_set;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
    scanf("%d",&c1);
    cin >> s1;
    scanf("%d",&c2);
    cin >> s2;
    line1 = get_line(s1);
    line2 = get_line(s2);
    set1 = get_set(s1);
    set2 = get_set(s2);
    same_tank = check(c1,c2);
    same_line = same_tank&check(line1,line2);
    same_side = same_line&check_side(set1,set2);
    near_set = same_side&check_set(set1,set2);
    printf("%d",same_tank);
    printf("%d",same_line);
    printf("%d",same_side);
    printf("%d",near_set);
	return 0;
}
