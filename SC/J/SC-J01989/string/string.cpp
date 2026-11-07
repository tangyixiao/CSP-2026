#include<bits/stdc++.h>
using namespace std;
string s;
int a[200001];
char c[200001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long s=0;
	cin>>n;
	for(int i=1;i<=n;i++){	
		cin>>a[i]>>c[i];
	}
	int l=1,r=n;
	while(l<r){
		int xiao,w;
		if(a[l]<a[r]){
			xiao=a[l];
			w=l;
		}else if(a[l]>a[r]){
			xiao=a[r];
			w=r;
		}else{
			xiao=a[l];
			w=0;
		}
		if(c[l]==c[r]){
			if(w==l){
				a[r]-=a[l];
				l++;
			}else if(w==r){
				a[l]-=a[r];
				r--;
			}else{
				l++;
				r--;
			}
		}else{
			if(w==l){
				s+=a[l];
				a[r]-=a[l];
				l++;
			}else if(w==r){
				s+=a[r];
				a[l]-=a[r];
				r--;
			}else{
				s+=a[l];
				l++;
				r--;
			}
		}
	}
	cout<<s;
	return 0;
}