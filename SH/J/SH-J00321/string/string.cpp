#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
struct sub{
	long long num;
	char c;
}sub[N];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long L=0;
	for(int i=0;i<n;i++){
		cin>>sub[i].num>>sub[i].c;
		L+=sub[i].num;
	}
	L/=2;
	int l=0,r=n-1;
	long long ans=0;
	while(L>0){
		long long cnt=min({L,sub[l].num,sub[r].num});
		if(sub[l].c!=sub[r].c){
			ans+=cnt;
		}
		sub[l].num-=cnt;
		sub[r].num-=cnt;
		L-=cnt;
		if(sub[l].num==0) l++;
		if(sub[r].num==0) r--;
	}
	cout<<ans;
} 
