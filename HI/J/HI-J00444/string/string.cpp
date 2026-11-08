#include<bits/stdc++.h>
using namespace std;
long long s0[200005];
char s1[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long fal=0;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		char b;
		cin>>b;
		s0[i]=a;
		s1[i]=b;
	}
	int l=1,r=n,h4=s0[l];
	while(l<r){
		if(s1[l]==s1[r]){
			if(h4>s0[r]){
				h4=h4-s0[r];
				r--;
			}else if(s0[l]<s0[r]){
				h4=s0[r]-h4;
				l++;
			}else{
				l++;
				r--;
				h4=s0[l];
			}
		}else{
			if(s0[l]>s0[r]){
				fal+=s0[r];
				h4-=s0[r];
				r--;
			}else if(s0[l]<s0[r]){
				fal+=h4;
				h4=s0[r]-h4;
				l++;
			}else{
				fal+=h4;
				l++;
				r--;
				h4=s0[l];
			}
		}
	}
	cout<<fal;
	return 0;
} 
