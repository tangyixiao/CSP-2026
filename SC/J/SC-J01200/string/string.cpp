#include<bits/stdc++.h>
using namespace std;
#define int long long
//
//bool check(string s){
//	int l=s.size();
//	for(int i=1;i<=l;i++){
//		if(s[i]!=s[l-i+1])return 0;
//	}
//	return 1;
//}

struct str{
	int len;
	char ch;
}s[200005];

char find(int pos){
	int i=0;
	while(1){
		if(pos>s[i].len){
			pos-=s[i].len;
			i++;
		}else{
			break;
		}
	}
	if(pos==s[i].len)return s[i].ch;
	return s[i].ch;
}

signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,len=0;
	cin>>n;
	{
		char last='*',c;
		int lastlen=-1,a;
		int cnt=0;
		for(int i=0;i<n;i++){
			cin>>a>>c;
			if(c==last && i!=n-1){
				a+=lastlen;
			}else{
				s[cnt].len=a;
				s[cnt].ch=c;
				cnt++;
				len+=a;
			}
			last=c;
			lastlen=a;
		}
	}
	int anscnt=0;
	for(int i=1;i<=len;i++){
		if(find(i)!=find(len-i+1))anscnt++;
	}
	cout<<anscnt/2;
	return 0;
}
