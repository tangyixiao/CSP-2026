#include <bits/stdc++.h> 
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,x;
	string a1,x1;
	cin >> a >> a1 >> x >> x1;
	if(a==x)cout <<"1";
	else cout <<"0";
    if(a==x&&a1[1]==x1[1])cout <<"1";
    else cout << "0";
    if(a==x&&a1[1]==x1[1]&&a1[2]-x1[2]<2||a1[2]-x1[2]<3)cout << "1";
    else cout <<"0";
    if(a==x&&a1[1]==x1[1]&&a1[2]-x1[2]<2)cout << "1";
	else cout << "0"; 	
	return 0;
}
