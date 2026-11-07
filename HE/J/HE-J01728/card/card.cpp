#include<bits/stdc++.h>
using namespace std;
stack<int>s;
const int maxn=5e5+7;
int n,m,a[maxn],cur[maxn],cnt[maxn],num[maxn];
int read(){
	long long f=1,s=0;
	char c=getchar();
	if(c<'0'||c>'9'){
		if(c=='-') f=-1;
		c=getchar();
	}
	while(c>='0'&&c<='9'){
		s=s*10+c-'0';
		c=getchar();
	}
	return f*s;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		a[i]=read();
	}
	for(int i=1;i<=n;i++){
		memset(cur,0,sizeof(cur));
		memset(cnt,0,sizeof(cnt));
		while(!s.empty()){
			s.pop();
		}
		for(int j=i;j<=n;j++){
			while(cur[a[j]]&&(!s.empty())){
				cnt[s.top()]--;
				cur[s.top()]--;
				s.pop();
			}
			s.push(a[j]);
			cur[a[j]]++;
			cnt[a[j]]++;
		}
		for(int j=1;j<=m;j++){
			num[j]+=cnt[j];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<num[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
