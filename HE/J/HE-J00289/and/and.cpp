#include<bits/stdc++.h>
using namespace std;
int a[200005],s[200005],bi[200005];
int bin(int a){
	int s=0,i=0;
	while(a){
		bi[i++]=a%2;
		if(bi[i-1]==1){
			s++;
		}
		a/=2;
	}
	return s;
}
bool cmp(int b,int c){
	return b>c;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s[i]=bin(a[i]);
	}
	int MIN=0,r=n;
	for(int i=0;i<n;i++){
		for(int i=0;i<r;i++){
			if(s[i]<s[MIN]){
				MIN=i;
			}
		}
		swap(s[MIN],s[--r]);
		swap(a[MIN],a[r]);
		swap(bi[MIN],bi[r]);
	}	
	int ans=a[0];
	for(int i=1;i<m;i++){
		ans=ans&a[i];
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
