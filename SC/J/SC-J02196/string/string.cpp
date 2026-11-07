#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    int n,a[100000],con=1,cont=0;
    char c[100000],ans[1000000],san[100000];
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i]>>c[i];
    	
	}
	int k=0;
	for(int i=2;i<=n;i++){
    	if(c[i]==c[i-1])
    	k++;
	}
	if(k==n-1){
		cout<<"0";return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
		ans[con]=c[i];
		con++;	
		}
	}
	int h=con;
	for(int i=1;i<=con;i++){
		san[i]=ans[h];
		h--;
	}
	for(int i=1;i<=con;i++){
		if(san[i]==ans[i])cont++;
	}
	cout<<cont;
return 0;
}
