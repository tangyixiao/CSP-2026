#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n;
struct node{
	long long num;
	char c;
}s[N];
long long cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s[i].num>>s[i].c;
	}
	int i=1,lastt=n;
	while(i<=lastt){
		long long l=s[i].num,r=s[lastt].num;
		long long minn=min(l,r);
		if(s[i].c==s[lastt].c){
			l-=minn;
			r-=minn;
		}else{
			cnt+=minn;
			l-=minn;
			r-=minn;
		}
		if(l==0 && r==0){
			i++;
			lastt--;
			continue;
		}
		if(l==0){
			i++;
			s[lastt].num-=minn;
		}
		if(r==0){
			lastt--;
			s[i].num-=minn;
		}
	}
	cout<<cnt;
	return 0;
}
