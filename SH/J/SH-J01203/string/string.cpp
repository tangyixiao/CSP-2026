#include<bits/stdc++.h>
using namespace std;
#define N 1000020
#define int long long
#define endl "\n"
#define F first
#define S second
#define iscc ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n;
string s;
pair<char,int> p[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	//system("fc test.ans test.out");
	
	iscc
	cin>>n;
	int len=0;
	for(int i=1;i<=n;i++){
		int x;
		char a;
		cin>>x;
		cin>>a;
		len+=x;
		for(int i=1;i<=x;i++){
			s+=a;
		}
	}
	
	int ans=0;
	int l=0,r=len-1;
	while(l<=r){
		if(s[l]!=s[r]){
			ans++;
		}
		l++;
		r--;
	}
	
	cout<<ans;
	
	/*
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>p[i].S>>p[i].F; 
	}
	
	int l=1,r=n;
	int ans=0;
	while(l<=r){
		if(p[l].F!=p[r].F){
			//ans+=min(p[l].S,p[r].S);
			if(p[l].S<p[r].S){
				p[r].S-=p[l].S;
				ans+=p[l].S;
				l++;
			}
			else if(p[l].S>p[r].S){
				p[l].S-=p[r].S;
				ans+=p[r].S;
				r--;
			}
			else if(p[l].S==p[r].S){
				ans+=p[l].S;
				r--;
				l++;
			}
		}else{
			if(p[l].S==p[r].S){
				l++;
				r--;
			}else{
				if(l==r-1||l==r-2){
					break;
				} 
				if(p[l].S==p[r].S){
					r--;
					l++;
				}
				//ans+=min(p[l].S,p[r].S);
				else if(p[l].S<p[r].S){
					p[r].S-=p[l].S;
					ans+=p[l].S;
					l++;
				}
				else if(p[l].S>p[r].S){
					p[l].S-=p[r].S;
					ans+=p[r].S;
					r--;
				}
			}
		}
	}
	cout<<ans;
	*/
	return 0;
}



