#include<bits/stdc++.h>
using namespace std;
const int N=21;
char ca[N],cc[N],sb[N],sd[N];
char m[N],n[N],a[N],b[N];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	for(int i=0;i<=1;i++){
		cin>>ca[i];
		a[i]=ca[i];
	}for(int i=0;i<=2;i++){
		cin>>sb[i];
		m[i]=sb[i];
	}for(int i=0;i<=1;i++){
		cin>>cc[i];
		b[i]=cc[i];
	}for(int i=0;i<=2;i++){
		cin>>cc[i];
		n[i]=cc[i];
	}
		int visa,visb;
		if(m[2]=='D'||m[2]=='F') visa=10;
		else visa=20;
		if(n[2]=='D'||n[2]=='F') visb=10;
		else visb=20;
		if(a[0]==b[0]&&a[1]==b[1]) {
			cout<<"1";
			if(m[0]==n[0]&&m[1]==n[1]){
				cout<<"1";
				if(visa==visb){
					cout<<"1";
					if(m[2]+1==n[2]||n[2]+1==m[2]){
						cout<<"1";
					}else cout<<"0";
				}else cout<<"00";
			}else cout<<"000";	
}else cout<<"0000";
return 0;}