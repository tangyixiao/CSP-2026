#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

string a,b,c;
int e,d,cnt=0;
cin>>e;
for(int i=1;i<=e;i++){
	cin>>d>>b;
	for(int j=0;j<d;j++){
		a=a+b;
		cnt++;
	}
}cout<<a;}

