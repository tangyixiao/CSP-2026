#include<bits/stdc++.h>
using namespace std;
struct str{
	int a,n;
}shu[200005];
string zh(int a){
	string s;
	if(a==0||a==1){
		s=a+'0';
	}else{
		while(true){
			if(a==1){
				s+="1";
				break;
			}else if(a==0){
				break;
			}else{
				if(a%2==0){
					s+="0";
				}else{
					s+="1";
				}
				a/=2;
			}
		}
	}
	return s;
}
int num(int a){
	string s=zh(a);
	int ans=0;
	for(int i=0;i<s.size();i++){
		if(s[i]-'0'==1){
			ans++;
		}
	}
	return ans;
}
int andd(int a,int b){
	string s,t,l;
	t=zh(a);
	l=zh(b);
	int ml=min(t.size(),l.size());
	for(int i=0;i<ml;i++){
		if(t[i]=='0'||l[i]=='0'){
			s+="0";
		}else{
			s+="1";
		}
	}
	int ans=0;
	for(int i=0;i<s.size();i++){
		ans+=(s[i]-'0')*pow(2,i);
	}
	return ans;
}
int cmp(str a,str b){
	if(a.n>b.n){
		return 1;
	}else if(a.n==b.n){
		return a.a>b.a;
	}else{
		return 0;
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0); 
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>shu[i].a;
		shu[i].n=num(shu[i].a);
	}
	sort(shu+1,shu+n+1,cmp);
	int ans=shu[1].a;
	for(int i=2;i<=m;i++){
		ans=andd(ans,shu[i].a);
	}
	cout<<ans;
	return 0;
}
