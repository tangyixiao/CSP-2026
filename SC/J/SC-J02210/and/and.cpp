#include<bits/stdc++.h>
using namespace std;
long long h=0;
long long d[10005][60];
long long a,b;
struct ho{
	long long m;
	long long n;
}s[100000];
long long h1;
void ss(long long k,long long &h,long long &h1){
	h++;
	h1=0;
	while(k){
		d[h][++h1]=k%2;//gao dao di 5 4 3 2 1
		k/=2;
	}
	return;
}
bool cmp(ho m,ho n){
	return m.n>=n.n;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>a>>b;
	
	long long maxx=0;
	long long c[100000];
	long long ans4=0;
	long long maxx1=0;
	for(int i=1;i<=a;i++){
		cin>>c[i];
		
		maxx1=max(maxx1,c[i]);
	}for(int i=1;i<=a;i++){
		if(maxx1==c[i]){
			ans4++;
		}
	}
	if(ans4>=b){
		cout<<maxx1;
		return 0;
	}
	sort(c+1,c+1+a);for(int i=1;i<=a;i++){
		ss(c[i],h,h1);
		
		s[i].m=i;
		
		maxx=max(maxx,h1);
		
		
	}
	
	
	
	for(int i=1;i<=a;i++){
		s[i].n=d[i][maxx];
	}
	sort(s+1,s+1+a,cmp);
	
		long long ans=1;
		long long w=a;
		long long ans2=0;
		for(int i=1;i<=a;i++){
			if(s[i].n==s[i+1].n){
				ans++;
				
			}
			else if(ans<b&&s[i].n!=s[i+1].n){
				continue;
			}
			else if(ans>=b&&s[i].n!=s[i+1].n){
				w=i;
				ans2=s[i].m;
				break;
			}
		}
		
		long long ans1=c[1];
		if(ans==b){
			ans1=c[1];
		
			
			for(int i=2;i<=w;i++){
				
					ans1=ans1&c[i];
					
				}
		cout<<ans1;	
		return 0;
	}
	else{
		long long ans3=0;
		
		while(ans>=b){
		for(int i=1;i<=a;i++){
			s[i].n=0;
			
		}
		ans3+=pow(2,ans2-1);
		
		maxx-=1;
		for(int i=1;i<=ans;i++){
			
			s[i].n=d[i][maxx];
			
		}
		sort(s+1,s+1+ans,cmp);
		long long ans=1;
		long long w=a;
		long long ans2=0;
		for(int i=1;i<=a;i++){
			if(s[i].n==s[i+1].n){
				
				ans++;
				
			}
			else if(ans<b&&s[i].n!=s[i+1].n){
				continue;
			}
			else if(ans>=b&&s[i].n!=s[i+1].n){
				
				w=i;
				ans2=s[i].n;
				break;
			}
		}
		if(ans==b){
			ans1=c[s[1].m];
			
			for(int i=2;i<=w;i++){
			
					ans1=ans1&c[s[i].m];
					
				}
				
		cout<<ans1;
		
		return 0;
	}
	
}ans3+=pow(2,ans2-1);
	cout<<ans3;
	return 0;
	}
	
	return 0;
}

