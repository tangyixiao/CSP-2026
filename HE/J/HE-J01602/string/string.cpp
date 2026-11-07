#include <bits/stdc++.h> 
using namespace std;
int n,t,cnt;
string s,b,a;
int m;
bool f=1;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++){
		int a;
		char c;
		cin>>a>>c;
		for (int j=1;j<=a;j++){
			s+=c;
			m++;
		}
	}
	for (int i=m-1;i>=0;i--){
		b+=s[i];
	}
	for (int i=0;i<=m-1;i++){
		if(b[i]!=s[i]){
			f=0;
		}
	}
	if(f==1){
		cout <<0;
	}
	else{
		if(m%2!=0){
			int t=m/2;
			for (int i=t-1;i>=0;i--){
				a+=s[i];
			}
			for(int i=t+1;i<=m-1;i++)	{
				if(a[i-t-1]!=s[i]){
					cnt++;
				}
			}
			cout <<cnt;
		}
		else{
			int t=m/2;
			for (int i=t-1;i>=0;i--){
				a+=s[i];
			}
			for(int i=t+1;i<=m-1;i++)	{
				if(a[i-t]!=s[i]){
					cnt++;
				}
			}
			cout <<cnt;
		}
	}
	
	return 0;
}
