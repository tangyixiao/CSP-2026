#include<bits/stdc++.h>
using namespace std;
int a[200010];
char c[200010];
int n;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	long long ans=0;
	long long cnt=0;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	for(int i=1;i<=n;i++) cnt+=a[i];
	long long st=1,en=cnt;
	int st_num=1,en_num=n;
	while(st<en){
		int k=min(a[st_num],a[en_num]);
		if(c[st_num]!=c[en_num]) ans+=k;
		st+=k;
		en-=k;
		if(a[st_num]==a[en_num]){
			st_num++;
			en_num--;
			continue;
		}
		if(a[st_num]==k){
			st_num++;
			a[en_num]-=k;
			continue;
		}
		if(a[en_num]==k){
			en_num--;
			a[st_num]-=k;
			continue;
		}
	}
	cout<<ans<<endl;
	return 0;
} 
//absbdbbjba
//1234554321
//1 a a
//2 b b
//3 s j
//4 b b
//5 d b
//1 a
//2 b
//1 c
//2 a
