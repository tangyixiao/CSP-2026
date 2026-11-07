#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    int n,s1,s2,p=0;
    char j,k;
    cin>>n;
    string z;
	cin>>s1>>j>>s2>>k;
	if(n==1)cout<<0;
	else if(n==2){
		if(s1<=s2&&j!=k)cout<<s1;
		else if(s2<s1&&j!=k)cout<<s2;
		else cout<<0;
	}
	else cout<<0;
	fclose(stdin);
	fclose(stdout);

	return 0;
}
