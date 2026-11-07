#include<bits/stdc++.h>
typedef long long LL;
using namespace std;
const LL N=1e9+10,M=1e5+10;
string str;
LL q;
char l;
LL n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		cin>>q>>l;
		for(int i=0;i<q;i++){
			str+=l;
		}
	}
	LL res=0;
	cout<<str[str.length()/2]<<" "<<str[str.length()/2-1];
	for(LL i=0,j=str.length()-i-1;i<str.length()/2;i++){
		if(str[i]!=str[j]){
			res++;
		}
	}
	cout<<res;
	return 0;
}
