#include<bits/stdc++.h>
using namespace std;
string s;
int len,n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		int time;string ch;
		cin>>time>>ch;
		for(int i=1;i<=time;i++){
			s.insert(len,ch);
			len++;
		}
	}
	//cout<<s;
	int ctime=0;
	for(int i=0;i<len/2;i++){
		if(s[i]!=s[len-i-1]) ctime++;
	}
	cout<<ctime;
	return 0;
}
