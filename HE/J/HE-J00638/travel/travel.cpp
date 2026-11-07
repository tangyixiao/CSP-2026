#include<bits/stdc++.h>
using namespace std;



int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c,cc,s,ss,pai,paii;
	char zuo,zuoo;
	cin >> c >> s >> cc >> ss;
	for(int i = 0;i<s.size();++i){
		if(i<2){
			pai += s[i];
			paii+=ss[i];	
		}
		else{
			zuo += s[i];
			zuoo += ss[i];
		} 
	}
	if(c == cc){
		cout << "1";
		if(pai == paii){
			cout << "1";
			if(zuo-'A'>=0 && zuo-'A' <= 2 && zuoo-'A'>=0 && zuoo-'A'<=2 || zuo-'A'>=3 && zuo-'A' <= 4 && zuoo-'A'>=3 && zuoo-'A'<=4){
				cout << "1";
				if(abs(int(zuo)-int(zuoo)) == 1) cout<<"1";
				else cout << "0";	
			}
			else cout << "00";
		} 
		else cout << "000";
	}
	else cout << "0000";
	
	return 0;
}
