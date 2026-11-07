#include <bits/stdc++.h>
using namespace std;
string s;
int p,n;
    long long cnt=0;
    char c;
    int main(){
    freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
    for(int i=1;i<=n;i++){ 
    	cin>>p>>c;
    	for(int j=1;j<=p;j++){
    		s+=c;
		}
	}
	int len=s.size();
   for(int i=1;i<=ceil(len/2);i++){
   	if(s[i]!=s[len+1-i]) cnt++;
   }
   cout<<cnt;
   return 0;	
}
