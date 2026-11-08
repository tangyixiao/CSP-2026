#include<bits/stdc++.h>
using namespace std; 
struct u{
	long long cd;
	char c;
}a[200200]; 
int n;
long long s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].cd>>a[i].c;
	}
	int l=1,r=n;
	while(l<r){
		if(a[l].c!=a[r].c){
		if(a[l].cd>a[r].cd){
			s+=a[r].cd;
			a[l].cd-=a[r].cd;
			r--;
		}
		else if(a[l].cd<a[r].cd){
			s+=a[l].cd;
			a[r].cd-=a[l].cd;
			l++;
		}
		else if(a[l].cd==a[r].cd){
		s+=a[l].cd;
		l++;
		r--;
	}
	}
	else if(a[l].c==a[r].c){
		if(a[l].cd>a[r].cd){
			a[l].cd-=a[r].cd;
			r--;
		}
		else if(a[l].cd<a[r].cd){
			a[r].cd-=a[l].cd;
			l++;
		}
		else if(a[l].cd==a[r].cd){
		l++;
		r--;
	}
	}
}
cout<<s;
	return 0;
}
