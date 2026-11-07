//T2 暴力 12/25 
#include <bits/stdc++.h>
using namespace std;
string s;
int n,cnt;    //cnt是答案 
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		int num;
		char c;
		cin>>num>>c;
		while(num--) s+=c;
	}
	for(int i=0;i<(s.size()+1)/2;i++){    //范围：一半位置 
		cnt+=(s[i]!=s[s.size()-i-1]);
	}
	cout<<cnt;	
	return 0;
}
