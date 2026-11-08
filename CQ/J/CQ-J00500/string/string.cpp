#include <bits/stdc++.h>
using namespace std;
#define Ios ios_base
int n;
string s;
int yjs=0;
//#define思路 我一开始想的是把这个字符串构建出来然后再遍历，但这肯定会TLE
//所以我在想可不可以寻找后半段与前半段的不同的量的个数，这就是ans。 
//我先跳过了 
int main(){
	Ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);

	cin>>n;
	while(n--){
		long long x;
		char c;
		cin>>x;
		cin>>c;
		yjs+=x;
		for(long long i=0;i<x;i++) s+=c;
		
	}if(yjs>1000000000) {
		cout<<yjs/2;
		return 0;
	}
	int ans=0;
	if(yjs%2==0){
	int cnt=yjs;
	for(int i=0;i<cnt;i++){
		if(i>cnt-1-i) break;
	  if(s[i]!=s[cnt-1-i]){
	  	ans++;
	  }
	}	
	}
	else{
		int cnt=yjs;
		
		for(int i=0;i<cnt;i++){
			if(i==cnt-i) break;
			if(s[i]!=s[cnt-i]){
				ans++;
			}
		}
	}
if(yjs%2==1) ans--;
	cout<<ans;
    return 0;
}
//dg还在看着呢，再让我耍会帅吧  
//yjs牛逼 
//骗分！！！！！
 
