#include<bits/stdc++.h>
using namespace std;
struct Str{
	string a;
	long long num;
}s[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].num>>s[i].a;
	}
	int i=1,r=n;
	while(i<=r){
		if(s[i].a==s[r].a){
			if(s[i].num>s[r].num){
				s[i].num-=s[r].num;
				r--;
			}else{
				s[r].num-=s[i].num;
				i++;
			}
		}else{
			cnt+=min(s[i].num,s[r].num);
			if(s[i].num>s[r].num){
				s[i].num-=s[r].num;
				r--;
			}else{
				s[r].num-=s[i].num;
				i++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
