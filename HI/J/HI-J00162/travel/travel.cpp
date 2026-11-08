#include<bits/stdc++.h>
using namespace std;
int main() {
    freopen("travel.in","r",stdin);     
	freopen("travel.out","w",stdout);
	int a[2],b[2],c[2],d[2];char e,f;
	for(int i=1;i<=2;i++)cin>>a[i]; 
	for(int i=1;i<=2;i++)cin>>c[i]; cin>>e;
	for(int i=1;i<=2;i++)cin>>b[i]; 
	for(int i=1;i<=2;i++)cin>>d[i]; cin>>f;
	if(a[1]==b[1]&&a[2]==b[2])cout<<1;else{cout<<0000;return 0;}
	if(c[1]==d[1]&&c[2]==d[2])cout<<1;else{cout<<0;}
	if(e<='c'&&f<='c'||e>='c'&&f>='c'){if(e-f==1||f-e==1)cout<<11;
	else{cout<<10;
	} 
	}else{cout<00;
	}
 	return 0;
}

