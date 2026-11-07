#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int a[200005];
int n,m;
string zh(int x){
	string s;
	while(x){
		if(x%2==0){
			s+="0";
		}
		else s+="1";	
		x/=2;
	}

	reverse(s.begin(),s.end());
	return s;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	bool flag=0;
	for(int i=1;i<=n;i++){
		if((pow(2,(int)(log2(a[i]+1))))!=a[i]+1){
			flag=1;
		}
	}
	if(flag==0){
		sort(a+1,a+1+n);
		cout<<a[n-m+1];
	}else{
		if(m==1){
			sort(a+1,a+1+n);
			cout<<a[n];
		}
		else if(m==2){
			int mx=-1;
			for(int i=1;i<=n;i++){
				for(int j=1;j<=n;j++){
					if(i!=j)
					mx=max(mx,a[i]&a[j]);
				}
			}
			cout<<mx;
		}
		else if(m==n){
			int p=a[1];
			for(int i=2;i<=n;i++){
				p&=a[i];
			}
			cout<<p;
		}else if(n<=20){
			int mx=-1;
			for(int i=1;i<=pow(2,n);i++){
				string s=zh(i);
				
				int nt=0;
				for(int j=0;j<20;j++){
					if(s[j]=='1'){
						nt++;
					}
				}
				if(nt==m){
					int o=n-s.size();
						reverse(s.begin(),s.end());
					while(o--)s+="0";
						reverse(s.begin(),s.end());
					int p;
					for(int j=0;j<20;j++){
						if(s[j]=='1'){
							p=a[j+1];
							break;
						}
					}
					for(int j=0;j<20;j++){
						if(s[j]=='1'){
							p&=a[j+1];
							
						}
					} 
					cout<<s<<' '<<p<<endl;
					mx=max(mx,p);
				}
			}
			cout<<mx;
		}
	}
	return 0;
}
	
