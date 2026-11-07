#include<bits/stdc++.h>
using namespace std;
const int Max=2e5+5;
int n;
int l;
int sum[Max];
int cnt;
string s;
char findd (int k) {
	int i=0;
	while(k>0){
		i++;
		k-=sum[i];
	}
	i--;
	return s[i];
}
int main () {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int m;
		cin>>m;
		char c;
		cin>>c;
		s+=c;
		l+=m;
		sum[i]=m;
	}
	int mid=(l+1)>>1;
	mid++;
	for(int i=mid;i<=l;i++){
		char cnow=findd(i),clast=findd(l-i+1);
		//cout<<cnow<<" "<<clast<<endl;
		if(cnow!=clast){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}