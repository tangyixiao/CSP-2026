#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
string c1 , s1 , c2 , s2 ,ans; 
bool checklie(char lie1 , char lie2){
	if(lie1=='A'&&lie2=='B')return 1;
	if(lie1=='B'&&lie2=='C')return 1;
	if(lie1=='D'&&lie2=='F')return 1;
	return 0;
}
int stoint(string s){
	for(int i = 10 ; i <= 18 ; i ++){
		if((s[0]-'0')*10+(s[1]-'0') == i)return i;
	}
	for(int i = 1 ; i <= 9 ; i ++){
		if(s[1] - '0' == i)return i;
	}
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	int len1 = s1.size() , len2 = s2.size();
	int co = stoint(c1) , cw = stoint(c2);
	char lie1 = s1[len1 - 1] , lie2 = s2[len2 - 1];
	s1 = s1.erase(len1-1,1);
	s2 = s2.erase(len2-1,1);
	int pai1 = stoint(s1) , pai2 = stoint(s2);
	if(co == cw){
		ans += "1";
		if(pai1 == pai2){
			ans += "1";
			if((lie1>='A'&&lie1<='C'&&lie2>='A'&&lie2<='C')||(lie1>='D'&&lie1<='F'&&lie2>='D'&&lie2<='F')){
				ans+="1";
				if(checklie(lie1 , lie2)||checklie(lie2 , lie1))ans+="1";
				else ans += "0";
			}
			else ans+="00";
		}
		else ans += "000";
	}
	else ans += "0000";
	cout << ans;
	return 0;
} 
