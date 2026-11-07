#include <bits/stdc++.h>
using namespace std;
string str;
long long n;
long long ans,pos,a;
char c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		cin>>a>>c;
		for(long long j=pos;j<(a+pos);++j){
			str[j]=c;
		}
		pos+=a;
	}
	for(long long i=0;i<pos;i++){
		if(str[i]!=str[pos-1-i]) ans++;
	}
	cout<<ans;
	return 0;
}
