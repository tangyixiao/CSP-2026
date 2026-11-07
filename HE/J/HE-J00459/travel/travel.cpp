#include</stdc++.h>
using namespace std;
long long a[1010],b[1010],c[1010],d[1010],n;
int main(){
	freopen("travel.in","w",stdin);
	freopen("travel.out","r",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i]>>c[i]>>d[i];
		if(a[i]==b[i]){
			cout<<"1";
		}else{
			cout<<"0";
		}
	}
	return 0;
}
