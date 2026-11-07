#include <bits/stdc++.h>
using namespace std;
 int main(){
 	string c1,s1,c2,s2;
 	int n=1;
 	freopen("travel.in","r",stdin) ;
 	freopen("travel.out","w",stdout) ;
 	cin >> c1 >> s1 >> c2 >> s2;
 	char a = s1[2],b = s2[2];
 	if (c1==c2){
 		cout << "1";
	 }else{
	 	n = 0;
	 	cout << "0";
	 }
	if (((s1[0]== s2[0] )&&(s1[1]== s2[1]))&&(n!=0)){
	 	cout << "1";
	 }else{
	 	n = 0;
	 	cout << "0";
	 }
	if (((('A'<=a<='C')&&('A'<= b <='C'))||(('D'<=a<='E')&&('D'<=b<='E')))&&(n!=0)){
		cout << "1";
	}else{
		n = 0;
	 	cout << "0";
	 }
	if ((((a-b) == 1)||((b-a) == 1))&&(n!=0)){
		if(((a=='C')&&(b=='D'))||((b=='C')&&(a=='D'))){
			n = 0;
			cout << "0";
		}
		else{
			cout << "1";
		}
	}else{
		cout << "0";
	}
 	fclose(stdin);
 	fclose(stdout);
 	return 0;
 }