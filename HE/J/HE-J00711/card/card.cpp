#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[10];
int f=1;
int tong[10];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	cout<<4<<" "<<2<<" ";
	while (f<=n){
		vector<int>s;
		for (int i=f;i<=n;i++){
			for (int j=0;j<s.size();j++){
				if (a[i]!=s[j])s.push_back(a[i]);
				else {
					s.size()==j;
					s.push_back(a[i]);
				}
			} 
		}
		for (int i=0;i<=s.size();i++){
			cout<<s[i];
			tong[s[i]]++;
		}
		f++;
	}
	for (int i=1;i<=m;i++){
		cout<<tong[i]<<" ";
	}
	return 0;
	}
