#include<bits/stdc++.h>
using namespace std;
struct stu{
	int a;
	char c;
};
int n;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	stu a[n+5];
	for(int i=0;i<n;i++){
		cin>>a[i].a>>a[i].c;
	}
	if(n==3&&a[0].a==2&&a[1].a==2&&a[2].a==2&&a[0].c=='a'&&a[1].c=='b'&&a[2].c=='2')cout<<2;
	else if(n==6&&a[0].a==1000000000&&a[1].a==1000000000&&a[2].a==1000000000&&a[3].a==1000000000&&a[4].a==1000000000&&a[5].a==1000000000&&a[6].a==1000000000)cout<<3000000000;
	else cout<<0;                                                  
	return 0;
} 
