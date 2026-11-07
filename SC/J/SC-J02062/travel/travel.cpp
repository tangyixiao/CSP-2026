#include <bits/stdc++.h>
using namespace std;
string sn1,sn2;
char sl1,sl2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	for(int i = 0;i < s1.length();i++){
		if(i < 2){
			sn1 += s1[i];
			sn2 += s2[i];
		} else{
			sl1 = s1[i];
			sl2 = s2[i]; 
		}
	}
	bool f1 = 0,f2 = 0,f3 = 0,f4 = 0;
	if(c1 == c2) f1 = 1;
	if(f1 && sn1 == sn2) f2 = 1;
	bool d1 = 0,d2 = 0; //0l1r
	if(sl1 <= 'C') d1 = 0;
	else d1 = 1;
	if(sl2 <= 'C') d2 = 0;
	else d2 = 1;
	if((f1 && f2) && d1 == d2) f3 = 1;
	if(((f1 && f2) && f3) && (sl1 + 1 == sl2 || sl1 - 1 == sl2)) f4 = 1;
	cout<<f1<<f2<<f3<<f4;
	return 0;
} 