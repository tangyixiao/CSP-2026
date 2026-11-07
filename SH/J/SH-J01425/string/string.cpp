#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int n,a;
long long ans,i;
string c,s,e;
bool f=true;
long long is_hw(string b){
	long long cnt=0;
	for(i=0;i<b.size()/2;i++)
		if(b[i]!=b[b.size()-1-i]) cnt+=1;
	return cnt;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++) s+=c;
		if(i==1) e=c;
		else if(e!=c) f=false;
	}
	if(n==1||f){
		cout<<"0";
		return 0;
	}
	ans=is_hw(s);
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
