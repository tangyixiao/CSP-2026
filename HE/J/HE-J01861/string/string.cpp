#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
struct c{
	int num;
	char letter;
}st[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cout.tie(0),cin.tie(0);
	
	int n;
	long long cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>st[i].num>>st[i].letter;
		cnt+=st[i].num;
	}
	long long ne=0;
	for(int i=1;i<=n/2;i++){
		if(st[i].num==st[n-i].num){
			ne=ne+st[i].num+st[n-i].num;
		}
		cnt =ne;
	}
	
	long long need=cnt/2;
	cnt=cnt/2;
	long long ans=0;
	int j=1;
	while(need>0){
		if(st[j].letter==st[n-j].letter) {
			break;
	}
		if(st[j].letter!=st[n-j].letter){
			need-=min(st[j].num,st[n-j].num);
			ans+=min(st[j].num,st[n-j].num);
		}
		if(ans>=cnt) ans=cnt;
	}
	cout<<ans;
	return 0;
} 
