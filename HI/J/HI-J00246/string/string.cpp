#include<bits/stdc++.h>
using namespace std;
int n;
string s="";
struct node{
	char c;
	int num;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].c;
		while(a[i].num--){
			s=s+a[i].c;
		}
	}
	long long dif=0;
	for(int i=0,j=s.size()-1;i<s.size();i++,j--){
		if(i>=j)break;
		if(s[i]!=s[j])dif++;
	}
	cout<<dif;
	return 0;
}
