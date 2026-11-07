#include <iostream>
#include <iomanip>
using namespace std;

int n,m;
int a[500001];
int t[300001];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		t[a[i]]=i;
	}
	for(int i=1;i<=m;i++){
		cout<<t[i]<<" ";
	}
	cout<<endl;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
