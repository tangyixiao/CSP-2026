#include<bits/stdc++.h>
using namespace std;

struct node{
	int x;
	char c;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	string s1="",s2="";
	cin >> n;
	long long sum=0;
	for(int i=1;i<=n;i++){
		cin >> a[i].x >> a[i].c; 
		sum+=a[i].x;
	} 
	sum=sum/2;
	long long cnt=sum;
	long long op1=1,op2=n;
	while(cnt>0){
		int co=min(cnt,a[op1].x*1ll);
		for(int i=1;i<=co;i++)s1+=a[op1].c;
		cnt-=co;
		a[op1].x-=co;
		op1++;

	}
	cnt=sum;
	while(cnt>0){
		int co=min(cnt,a[op2].x*1ll);
		for(int i=1;i<=co;i++)s2+=a[op2].c;
		cnt-=co;
		a[op2].x-=co;
		op2--;
	}
	long long ans=0;
	for(int i=0;i<s1.size();i++){
		if(s1[i]!=s2[i])ans++;
	}
	cout << ans; 
	return 0;
} 
