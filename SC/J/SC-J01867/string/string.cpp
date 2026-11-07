#include<bits/stdc++.h>
using namespace std;
#define int long long
#define FILE "string"
#define JUDGE
const int N=2e5+5;
char c[N];int a[N];
int qz[N];int n,sum=0;
int low(int v){
	return upper_bound(qz,qz+n+1,v)-qz-1;
}
int high(int v){
	return lower_bound(qz,qz+n+1,v)-qz;
}
signed main(){
	#ifdef JUDGE
	freopen(FILE ".in","r",stdin);
	freopen(FILE ".out","w",stdout);
	#endif
	cin>>n;
	string s;
	for(int i=1; i<=n; i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
		qz[i]=qz[i-1]+a[i];
	}
	if(sum<=2e5){
		string s;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=a[i]; j++){
				s+=c[i];
			}
		}
		int ans=0;
		for(int i=0; i<s.length()/2; i++){
			if(s[i]!=s[s.length()-i-1]) ans++;
		}
		cout<<ans;
	}else{
		int ans=0;
		qz[n+1]=(sum+1)/2;
		sort(qz+1,qz+n+2);
		n++;
//		for(int i=1; i<=n; i++){
//			cout<<qz[i]<<' ';
//		}
//		cout<<'\n';
		int m=upper_bound(qz+1,qz+n+1,(sum+1)/2)-qz;
//		cout<<m<<'\n';
		for(int i=m; i<=n; i++){
			int p=high(sum-qz[i]);
			int q=low(sum-qz[i-1]);
			if(p>q) continue;
//			cout<<i<<' '<<p<<' '<<q<<'\n';
			ans+=max(((sum-qz[i])-qz[p])*(c[i]!=c[p-1]),0ll);
			ans+=max((qz[q]-(sum-qz[i-1]))*(c[i]!=c[q+1]),0ll);
			for(int j=p+1; j<=q; j++){
				if(c[i]!=c[j]) ans+=a[j];
			}
//			cout<<((sum-qz[i])-qz[p])*(c[i]!=c[p-1])<<' '<<(qz[q]-(sum-qz[i-1]))*(c[i]!=c[q+1])<<'\n';
		}
		cout<<ans;
	}
	
	#ifdef JUDGE
	fclose(stdin);
	fclose(stdout);
	#endif
	return 0;
}
/*
6
1 a
2 b
3 c
4 d
5 e
6 f

10
*/

/*
3
7 a 
3 b
4 c
*/