#include<iostream>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2,ans;
	cin>>c1>>s1>>c2>>s2;
	if(c1 == c2)
		ans+='1';
	else
		ans+='0';
	if(ans[0] == '1') 
		if(s1[0] + s1[1] == s2[0] + s2[1])
			ans+='1';
		else
			ans+='0';
	else
		ans += '0';
	char a = s1[2],b = s2[2];
	if(ans[1] == '1')
		if(a == 'A'&&b == 'B'||a == 'A'&&b == 'C'||a == 'B'&&b == 'C'||a == 'C'&&b == 'A'||a == 'C'&&b == 'B'||a == 'B'&&b == 'A'||a == 'D'&&b == 'F'||a == 'F'&&b == 'D')
			ans+='1';
		else
			ans+='0';
	else
		ans+='0';
	if(ans[2] == '1'){
		if(a == 'A'&&b == 'B'||a == 'B'&&b == 'C'||a == 'C'&&b == 'B'||a == 'B'&&b == 'A'||a == 'D'&&b == 'F'||a == 'F'&&b == 'D')
			ans+='1';
		else
			ans+='0'; 
	}
	else
		ans+='0';
	cout<<ans;
	return 0;
	fclose(stdin);
	fclose(stdout);
} 
