#include <bits/stdc++.h>
using namespace std;
string a;
int ch(string q,int w,int e){
	return (q[w]==q[e]);
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long cnt=0,su=0;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int y=0;
		string now;
		cin>>y>>now;
		for(int i=0;i<y;i++){
			a=a+now;
		}
		su+=y;
	}for(int i=0;i<su/2;i++){
		cnt+=!(ch(a,i,su-i-1));
	}cout<<cnt;
	return 0;
} 
