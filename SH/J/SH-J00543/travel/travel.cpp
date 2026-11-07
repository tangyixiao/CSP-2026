#include <bits/stdc++.h>
using namespace std;
int n;
int ans1=0, ans2=0, ans3=0,ans4=0;

bool isleft(char c){
	if(c=='A'||c=='B'||c=='C')return true;
	return false;
}
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		ans1=true;
	}
	if(ans1 && s1[0]==s2[0] && s1[1]==s2[1]){
		ans2=true;
	}
	if(ans2){
		if(isleft(s1[2])==isleft(s2[2])){
			ans3=true; 
		} 
	}
	if(ans3){
		char seat1 = s1[2];
		char seat2 = s2[2];
//		printf("seat1=%d,seat2=%d\n",seat1,seat2); 
		if(seat1 == seat2+1 || seat2 == seat1+1){
			ans4=true;
		}
	}
	cout << ans1 << ans2 << ans3 << ans4;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
