#include<bits/stdc++.h>
using namespace std;
string f(int x){
	string s;
	for(int i=1;i<=30;i++){
		s+=('0'+x%2);
		x/=2;
	}
	return s;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int N=1;
	for(int i=1;i<=30;i++)
		N*=2;
	int n,m;
	cin>>n>>m;
	queue<string>q1,q2;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		string s=f(x);
		q1.push(s);
	}
	int o=n;
	long long ans=0;
	for(int i=30;i>=1;i--){
		N/=2;
		int d=0;
		for(int j=1;j<=o;j++){
			string e=q1.front();
			q1.pop();
			if(e[i-1]=='1'){
				q1.push(e);
				d++;
			}else
				q2.push(e);
		}
		if(d<m){
			while(!q2.empty()){
				q1.push(q2.front());
				q2.pop(); 
			}
		}else{
			while(!q2.empty()){
				q2.pop(); 
			}
			ans+=N;
			o=d;
//			cout<<' '<<ans<<' '<<N<<' '<<d<<' '<<i<<' '<<o<<endl;			
		}
	}
	cout<<ans;
	return 0;
}