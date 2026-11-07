#include<bits/stdc++.h>
using namespace std;
string s[20010];
int awy(int s1,int s2){
	int f=0;
	string r;
	for(int i=0;i<min(s[s1].size(),s[s2].size());i++){
		if(s[s1][i]==1 && s[s2][i]==1){
			r[i]=1;
		}
		else{
			r[i]=0;
		}
	}
	int rr=r.size();
	for(int i=0;i<r.size();i++){
		int jia=1;
		if(r[i]==1){
			for(int j=1;j<=rr;j++){
				jia*=2;
			}
			f+=jia;
		}
		rr--;
	}
	return f;
}


int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[20010];
	int MAX=0;
	int c,cnt;
	int ans=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		MAX=max(MAX,a[i]);
		cnt=0;
		for(int j=1;j<=20;j++){
			c=1;
			for(int k=1;k<=j;k++){
				c*=2;
			}
			if(c>a[i]){
				int x=a[i];
				x-=c/2;
				s[i][cnt]=1;
				while(x){
					cnt++;
					c=1;
					j--;
					for(int k=1;k<=j;k++){
						c*=2;
					}
					if(c<=x){
						s[i][cnt]=1;
						x-=c;
					}
					else{
						s[i][cnt]=0;
					}
				}
				break;
			}
		}
	}
	
	
	if(m==1){
		cout<<MAX;
		return 0;
	}
	
	
	if(m==n){
		for(int i=0;i<n;i++){
			if(a[i]==0){
				cout<<0;
				return 0;
			}
		}
	}
	
	
	if(m==2){
		for(int i=0;i<n-1;i++){
			ans=max(ans,awy(i,i+1));
		}
		cout<<ans<<endl;
		return 0;
	}
	
	if(n<=20){
		sort(a,a+n);
		for(int i=1;i<=m;i++){
			ans=awy(n-i,n-i-1);
			string z;
			for(int i=0;i<min(s[n-i].size(),s[n-i-1].size());i++){
				if(s[n-i][i]==1 && s[n-i-1][i]==1){
					z[i]=1;
				}
				else{
					z[i]=0;
				}
			}
			s[n-i-1]=z[i];
		}
	}
	sort(a,a+n);
	cout<<a[n-m];
	return 0;
} 
