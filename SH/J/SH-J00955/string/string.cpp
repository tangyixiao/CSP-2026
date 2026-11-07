#include<bits/stdc++.h>
using namespace std;
long long n,s=0;
int a[200005];
char b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		s+=a[i];
	}	
	long long p=(s+1)/2,mid=1;
	long long js=0;
	while(js<p){
		js+=a[mid];
		if(js==p)	break;
		mid++;
	}
	long long h=1,ans=0,cnt=0;
	for(int i=n;i>mid,h<=mid;){
		if(i==h){
			cout<<ans;
			return 0;
		} 
		if(a[h]>a[i]){
			if(b[i]!=b[h])	ans+=a[i];
			a[h]-=a[i];
			i--;
		}
		else if(a[h]==a[i]){
			if(b[i]!=b[h])	ans+=a[i];
			h++;
			i--;
		}
		else{
			if(b[i]!=b[h])	ans+=a[h];
			a[i]-=a[h];
			h++; 
		}
		cnt=i;
	}
	if(h<cnt){
		int r=p-1;
		int l=p-((a[mid]+1)/2);
		if(b[mid]-1!=b[mid])	ans+=r-l;
	}
	cout<<ans;
	return 0;
}
