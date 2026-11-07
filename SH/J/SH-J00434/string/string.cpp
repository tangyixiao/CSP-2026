#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long a,b,c=0,cnt=0;
	string q,w,e;
	e="";
	cin>>a;
	for(long long i =0 ; i<a ; i++){
		cin>>b>>q;
		c+=b;
		for (long long j =0 ; j<b ; j++){
			e+=q;
		}
	}
	
	for(long long i = 0;i<c;i++){
			if (i>=(c-1-i)){
				if (abs(e[i]-e[c-1-i])>=1){
				cnt++;
				}
			}
		}
	
	cout<<cnt;
	return 0;
}
