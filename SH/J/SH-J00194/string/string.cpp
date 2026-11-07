#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,num,cnt=0;
	char c;
	string s;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>num>>c;
		for(int j=1;j<=num;j++){
			s+=c;
		}
	}
	for(int i=0;i<(s.size())/2;i++){
		if(s[i]!=s[n-i]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
/*










*/
