#include<bits/stdc++.h>
using namespace std;
int n;
int t[27];
string S;
struct sz{
    int sl;
    char zm;
}a[2010001];
bool hwc(string s){
	for(int i=0;i<s.size()/2+1;i++){
		if(s[i]!=s[s.size()-(i+1)])
		return false;
	}
	return true;
}
int xg(string s){
	int ans=0;
	for(int i=0;i<s.size()/2+1;i++){
		if(s[i]!=s[s.size()-(i+1)])
		ans++;
	}
	return ans;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i].sl>>a[i].zm;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=a[i].sl;j++)
    	S+=a[i].zm;
	}
	if(hwc(S))
	cout<<0;
	else{
		cout<<xg(S);
	}
}