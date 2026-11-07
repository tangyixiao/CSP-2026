#include<bits/stdc++.h>
using namespace std;

int main(){
	
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[101],s;
	cin >>n >> m;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	s=a[0];
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
		if(a[j]==a[i]){
			s=0;
		}
	}
		s+=a[i];
		cout << s << " ";
	}
	
	fclose(stdin);
	fclose(stdout);
	
	
	return 0;
}
