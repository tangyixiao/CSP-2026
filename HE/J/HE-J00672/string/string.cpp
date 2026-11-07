#include<bits/stdc++.h>
using namespace std;

struct Node{
	long long a;
	char c;
};
long long n, ans;
Node s[100005];
long long len;   //结构体字符串 s 的末位下标
long long x;     //当前前端未对应回文的字符数量

int main(){
	freopen("string.in",  "r", stdin);
	freopen("string.out", "w", stdout);

	cin>>n;
	for(int i=0;i<n;i++) cin>>s[i].a>>s[i].c;

	len = n-1;
	for(int i=0;i<n;i++){
		//if(s[i].a == 0) break;
		x = s[i].a;
		while(x != 0){
			if(s[i].c == s[len].c){
				if(x > s[len].a){
					x -= s[len].a;
					s[len].a = 0;
					len--;
				}
				else if (x < s[len].a){
					s[len].a -= x;
					x = 0;
				}
				else {
					x = 0;
					s[len].a = 0;
					len--;
				}
			}
			else{
				if(x > s[len].a){
					ans += s[len].a;
					x -= s[len].a;
					s[len].a = 0;
					len--;
				}
				else if(x < s[len].a){
					ans += x;
					s[len].a -= x;
					x = 0;
				}
				else {
					x = 0;
					s[len].a = 0;
					len--;
				}
			}
		}

	}



	cout<<ans;
	return 0;
}
