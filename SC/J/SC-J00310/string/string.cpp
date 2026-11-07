#include<bits/stdc++.h>
using namespace std;
string s = "";
int n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		long long a;
		string x;
		cin>>a>>x;
		while(a--){
			s+=x;	
		}
	}
	
	long long ssize = s.size();
	long long cnt = 0;
	if(ssize%2 == 0){
		ssize/=2;
		for(long long i=0;i<ssize;i++){
			if(s[i]!=s[i+ssize]) cnt++;
		}
	} 
	else{
		ssize-=1,ssize/=2;
		for(long long i=0;i<ssize;i++){
			if(s[i]!=s[i+ssize+1]) cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
/*479681762610
24474

*/

