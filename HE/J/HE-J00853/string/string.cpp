#include<bits/stdc++.h>
using namespace std;
struct node{
	long long x;
	char c;
}a[200005];
long long ans=0;
int main(){
	//Trick||Treat!
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].c;
	}
	long long l=1;
	long long r=n;
	long long numl=a[1].x;
	long long numr=a[n].x;
	while(l<r){
		if(a[l].c!=a[r].c){
			ans+=min(numl,numr);
			if(numl<numr){
				numr-=numl;	
				l++;
				numl=a[l].x;
			}
			else if(numl>numr){
				numl-=numr;	
				r--;
				numr=a[r].x;	
			}
			else{	
				l++;
				numl=a[l].x;
				r--;
				numr=a[r].x;
			}
		}
		else{
			if(numl<numr){
				numr-=numl;	
				l++;
				numl=a[l].x;
			}
			else if(numl>numr){
				numl-=numr;	
				r--;
				numr=a[r].x;	
			}
			else{	
				l++;
				numl=a[l].x;
				r--;
				numr=a[r].x;
			}
		}
	}
	cout<<ans;
	return 0;
}
