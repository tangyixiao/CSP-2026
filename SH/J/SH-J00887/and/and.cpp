#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[300000],s=0;
int j[300000];
void d(int cs){
	if (cs==m){
		int l=a[j[0]];
//		cout<<l<<" !";
//		cout<<a[j[0]]<<' ';
		for (int i=1;i<m;i++){
			l=l&a[j[i]];
//			cout<<a[j[i]]<<' ';
		}
//		cout<<endl;
//		cout<<l<<endl;
		if (l>s){
			s=l;
		}
	}else{
		for (int i=j[cs-1]+1;i<=n;i++){
			j[cs]=i;
			d(cs+1);
			j[cs]=0;
		}	
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	if (n==m){
		s=a[1];
		for (int i=2;i<=n;i++){
			s=s&a[i];
		}
	}else{
		d(0);
	}
	cout<<s<<endl;
//	cout<<(12&12);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
