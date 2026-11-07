#include<bits/stdc++.h>
using namespace std;
long long a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long n;
	long long cnt=0,cnt_1=0;
	string S,c;
	char now_l,now_r;
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>a[i];
		cin>>c;
		for(int j=0;j<a[i];j++){
			S[cnt+j]=c[0];
		}
		cnt+=a[i];
	}
	now_l=S[0];
	now_r=S[cnt-1];
	for(long long i=0;i<cnt;i++){
		if(now_l!=now_r){
			cnt_1++;
		}
	}
	cout<<cnt_1/2;
	return 0;
}
