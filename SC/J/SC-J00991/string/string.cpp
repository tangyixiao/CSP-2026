#include<bits/stdc++.h>
using namespace std;
int abc(string s){
	int l,r;
	int num=0;
	if(s.size()%2==1){
		l=s.size()/2;
		r=s.size()/2;
	}else{
		l=s.size()/2-1;
		r=s.size()/2;
	}
	while(l>=0 && r<=s.size()-1){
		if(s[l]!=s[r]){
			num++;
		}
		l--;
		r++;
	}
	return num;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string s;
	int arr[200005];
	for(int i=0;i<n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int j=0;j<a;j++){
			s+=c;
		}
	}
	cout<<abc(s);
	return 0;
}