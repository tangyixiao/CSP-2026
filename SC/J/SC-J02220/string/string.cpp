#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a;
char c;
string s;
signed main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		cin>>a>>c;
		for(int i=1;i<=a;i++){
			s+=c;
		}
	}//s
	int num=0;
	for(int i=0;i+i<=s.size();i++){
		if(s[i]!=s[s.size()-1-i])num++;
	}
	cout<<num;
	fclose(stdin);
	fclose(stdout);
	return 0;
}