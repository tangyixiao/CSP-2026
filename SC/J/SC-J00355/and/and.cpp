#include<bits/stdc++.h>
using namespace std;
int a[200005];
string s,c,z;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m=0,b=0,d=0,g1,g2;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		g1=-1,g2=-1;
		while(a[i]>=2){
			s+=a[i]%2+48;
			a[i]/=2;
			g1++;
		}
		cout<<s<<endl;
		for(int j=i;j<=n;j++){
			while(a[i]>=2){
				c+=a[j]%2+48;
				a[j]/=2;
				g2++;
				
			}
			cout<<c<<" ";
			d=min(g1,g2);
			int y=0;
			while(y<d){
				if(min(g1,g2)>-1){
					if(s[y]==c[y]){
						z[y]=s[g1];
					}
					else{
						z[y]='0';
					}
				}
				y++;
			}
			int zs=1;
			for(int i=0;i<d;i++){
				b+=(z[i]-48)*zs;
				zs*=2;
			}
			if(b>m){
				m=b;
			}
		}
	}
	cout<<m;
	return  0;
}