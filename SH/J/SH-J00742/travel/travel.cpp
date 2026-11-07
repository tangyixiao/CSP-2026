#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool check1(string a,string b){//车厢 
	return a==b;
}
bool check2(string a,string b){//同排 
	return a[0]==b[0] && a[1]==b[1];
}
bool check3(string a,string b){//同侧 
	if ((a[2]=='C' && b[2]=='D') || (a[2]=='D' && b[2]=='C')){
		return 0;
	}
	return 1;
}
bool check4(string a,string b){//相邻 
	if (a[2]+1==b[2] || a[2]-1==b[2]){
		return 1;
	}
	return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
//	cout<<c1<<" "<<s1<<" "<<c2<<" "<<s2<<endl;
	if (check1(c1,c2)){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if (check1(c1,c2) && check2(s1,s2)){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if (check1(c1,c2) && check2(s1,s2) && check3(s1,s2)){
		cout<<1;
	}
	else{
		cout<<0;
	}
	if (check1(c1,c2) && check2(s1,s2) && check3(s1,s2) && check4(s1,s2)){
		cout<<1;
	}
	else{
		cout<<0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
