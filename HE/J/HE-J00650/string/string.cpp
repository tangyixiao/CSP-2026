#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,m=0;
	long long a;
	cin>>n;
	char b;
	string s;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		for(int i=1;i<=a;i++){
			m++;
			s[m]=b;
		}
	}
	int y,x=0;
	if(m%2==0) y=m/2;
	else y=m/2+1;
	for(int i=1;i<=y;i++){
		if(s[i]!=s[y-i+1]){
			x++;
		}
	}
	cout<<x;
	return 0;//Trick||Treat!
}
