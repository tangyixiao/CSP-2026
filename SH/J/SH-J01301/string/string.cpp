#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
int n;
cin>>n;
string t;
string s;
int num;
int q;

for(int i=1;i<=n;i++){	
cin>>num>>s;
q+=num;
	while(num--){	
t+=s;

}
}
//for(int i=0;i<q;i++)cout<<t[i];
int l=0,r=t.size()-1;
int cnt=0;
while(l<r){
	if(t[l]!=t[r]){
		cnt++;
	}
	l++,r--;
}
cout<<cnt;

	return 0;
}
