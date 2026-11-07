#include<bits/stdc++.h> 
using namespace std;
long long n,m,max1;
long long w,js;
long long a[30000000];
string b[30000000];
long long c[30000000];
void and1(long long sum,int bs,string s,long long n1){
	if(bs==m){
		for(long long i=1;i<=w;i++){
			long long t;
			if(s[i]=='1'){
				t=1;
				for (long long j=1;j<i;j++){
					t=t*2;
				}
				sum+=t;
			}
		}
		max1=max(max1,sum);
		return;
	}
	for (long long i=n1;i<=n;i++){
		string r=s;
		long long qq=js;
		if(i!=qq){
			for (long long j=1;j<=w;j++){
				if(b[i][j]=='1'&&s[j]=='1'){
					s[j]='1';
				}else{
					s[j]='0';
				}
			}
			js=i;
			and1(sum,bs+1,s,i);
			s=r;
			js=qq;
		}
		
	}
	
	return;
}
int main(){
	cin>>n>>m;
	max1=-1;	
	w=-1;
	for (long long i=1;i<=n;i++){
		cin>>a[i];
		b[i]='0';
	}
	for (long long i=1;i<=n;i++){
		long long x=a[i];
		long long g=1;
		while(x!=0){
			long long y=x%2;
			c[g]=y;
			x=x/2;
			g+=1;
		}
		g-=1;
		w=max(w,g);
		for (long long j=1;j<=g;j++){
			if(c[j]==1){
				b[i]+='1';
			}else{
				b[i]+='0';
			}
		}
	}
	for (int i=1;i<=n;i++){
		for (long long j=1;j<=w;j++){
			if(b[i].size()<=j){
				b[i]+='0';
			}
		}
	}
	for (long long i=1;i<=n;i++){
		js=i;
		and1(0,1,b[i],1);
	}
	
	cout<<max1<<endl;
	return 0;
}