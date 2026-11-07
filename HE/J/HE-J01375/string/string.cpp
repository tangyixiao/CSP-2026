#include<bits/stdc++.h>
using namespace std;
int n;
int a[200005];
string c[200005];
long long ans=0;
long long l,r,al,ar;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	l=1,r=n;
	al=a[l];
	ar=a[r];
	while(l<r){
		if(c[l]!=c[r]){
			if(al>ar){
				ans+=ar;
				r--;
				al-=ar;
				ar=a[r];
			}
			else if(al<ar){
				ans+=al;
				l++;
				ar-=al;
				al=a[l];
			}
			else if(al==ar){
				ans+=al;
				l++;
				r--;
				al=a[l];
				ar=a[r];
			}
		}
		if(c[l]==c[r]){
			if(al>ar){
				r--;
				al-=ar;
				ar=a[r];
			}
			else if(al<ar){
				l++;
				ar-=al;
				al=a[l];
			}
			else if(al==ar){
				l++;
				r--;
				al=a[l];
				ar=a[r];
			}
		}
	}
	cout<<ans;
	return 0;
}
