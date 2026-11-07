#include <bits/stdc++.h>
using namespace std;
struct str{
	long long g;
	long long en;
	int x;
	char y;
}st[200000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string a;
	int	n;
	long long sum=0;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>st[i].x;
		cin>>st[i].y;
		sum+=st[i].x;
		st[i].g=sum;
		st[i].en=st[i].g+st[i].x+1;
	} 
	if(n==1){
		cout<<0;
		return 0;
	}
	else if(n==2){
		if(st[1].y==st[2].y) cout<<0;
		else cout<<min(st[1].x,st[2].x);
		return 0;
	}
	int num=0;
	int k=1,k1=n;
	for(int i=1;i<=sum/2;i++){		
		if(i>st[k].en) k++;
		char m=st[k].y;
		char m1;
		if(sum+1-i<st[k1].g) k1--;
		m1=st[k1].y;
		if(m!=m1) num++;
	}
	cout<<num;
	return 0;
}