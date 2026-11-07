#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char a[999999],b;
	int m,c,k=1,p,q,s=0,num=0;
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>c;
		s+=c;
		cin>>b; 
		
		for(int j=1;j<=c;j++){
			
			a[k]=b;
			k++;
		}
	}
	q=s;
	for(int p=1;p<=s/2;p++){
		if(a[p] !=a[q]){
			num++;
		}
		q--;
	}
	cout<<num;
	

}
