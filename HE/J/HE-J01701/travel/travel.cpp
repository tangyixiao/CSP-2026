#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	string c,s,c1,s1;
	cin>>c>>s>>c1>>s1;
	if((c=="01" and c=="16") and (c1=="01" and c1=="16")){
		cout<<"0"<<"0"<<"0"<<"0";
	}
	if((s.end>="A" and s.end<="C") and (s1.end>="A" and s1.end<="C")){
		cout<<"1";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
