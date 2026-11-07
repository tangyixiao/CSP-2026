#include<bits/stdc++.h>
using namespace std;
struct z{
	long long a;char c;
}s[100005];
vector<char> str1;
int n;long long si,a;
queue<char> str2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i].a>>s[i].c;
		si+=s[i].a;
		for(long long j=0;j<s[i].a;j++){
			str1.push_back(s[i].c);
			str2.push(s[i].c);
		}
	}
	long long c=si;
	for(int i=0;i<si/2;i++){
		char t=str2.front(),w=str1[str1.size()-1];
		if(t!=w)a++;
		str1.pop_back();
		str2.pop();
	}
	cout<<a;
	return 0;
}