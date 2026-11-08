#include<bits/stdc++.h>
using namespace std;
struct node{
	int num;
	char c;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,maxx=-1; 
	cin>>n;
	string s="";
	for(int i=1;i<=n;i++){
		scanf("%d %c",&a[i].num,&a[i].c);
		maxx=max(maxx,a[i].num);
		//cin>>a[i].num>>a[i].c;
		for(int j=1;j<=a[i].num;j++){
			s+=a[i].c;
		}
	}
	if(maxx>1000000000){
		cout<<0;
		return 0;
	}
	long long cnt=0;
	for(int i=0,j=s.size()-1;i<=j;i++,j--){
		if(s[i]!=s[j]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}


