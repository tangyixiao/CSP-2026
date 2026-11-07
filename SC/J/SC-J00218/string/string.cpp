#include<bits/stdc++.h>
using namespace std;
struct node{
	int a;
	char b;
}o[100005];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,h1,h2;
	string s1;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>o[i].a>>o[i].b;
		for(int j=1;j<=o[i].a;j++){
			s1+=o[i].b;
		}
		h1+=o[i].a;
		h2+=o[i].a;
	}
	//h1/=2;
	int o=0;
	h2--;
	for(int i=0;i<h1;i++){
		if(s1[i]==s1[h1-1]){
			h1--;
			continue;
		}
		h1--;
		o++;
	}
	cout<<o;
	return 0;
} 