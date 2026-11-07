#include<bits/stdc++.h>
using namespace std;
long long n,L,a,ans;
char s;
string str;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++){
    	cin>>a;
    	cin>>s;
    	L+=a;
    	for(int j=1;j<=a;j++){
            str+=s;
		}

	}
	str=" "+str;
	for(long long i=1;i<=L/2;i++){
		if(str[i]!=str[L+1-i]) ans++;
	}
	cout<<ans;
	return 0;
}