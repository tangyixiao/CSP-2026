#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	long long a[200005];
	char c[200005];
	string s;
	s=s+'0';
	long long x=0;
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		x+=a[i];
		
	}
	int u=1;
	if(n%2==0){
		for(int i=1;i<=n/2;i++){
			if(a[i]!=a[n-i+1]){
				u=0; 
				break;
			}
			if(c[i]!=c[n-i+1]){
				u=0;
				break;
			}
		}
		if(u){
			cout<<0;
			return 0;
		}
	}
	if(n%2==1){
		for(int i=1;i<=(n+1)/2-1;i++){
			if(i!=(n+1)/2){
				if(a[i]!=a[n-i+1]){
					u=0; 
					break;
				}
				if(c[i]!=c[n-i+1]){
					u=0;
					break;
				}
			}
			if(i==(n+1)/2){
				if(a[i]!=1){
					u=0;
					break;
				}
			}
		}
			
		if(u){
			cout<<0;
			return 0;
		}
	}
	int fl=0;
	if(x%2==0){
		fl=1;
	}
	long long sp=0;
	for(long long i=1;i<=n;i++){
		for(long long j=1;j<=a[i];j++){
			if(fl && sp==x/2){
				s=s+'0';
			}
			s=s+c[i];
			sp++;
		}
	}
/*	long long flagr[200005];
	long long flagl[200005];
	for(long long i=1;i<=x/2;i++){
		if(s[i]!=s[x+1-i]){
			flagr[s[x+1-i]-'a'+1]++;
			flagl[s[i]-'a'+1]++;
		}
	}
	
	for(int i=1;i<=26;i++){
		
	} 
*/
	long long cnt=0;
	for(long long i=1;i<=x/2;i++){
		if(s[i]!=s[x+1-i]){
			cnt++;
		}
		//cout<<"abc"<<endl;
	}
	cout<<cnt;
	return 0;
}
