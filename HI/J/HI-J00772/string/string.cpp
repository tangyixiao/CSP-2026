#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,d=0,b=0;
	cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		int a;
		string e;
		cin>>a;
		cin>>e;
		b=b+a;
		for(int j=1;j<=a;j++){
			s=s+e;
		}
	}
	for(int i=0;i<=(b-1)/2;i++)	{
		if(s[i]!=s[(b-1)-i]){
			d=d+1;
		}
	}
	cout<<d;
	return 0;
}
