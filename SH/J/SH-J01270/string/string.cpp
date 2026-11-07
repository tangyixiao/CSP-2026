#include<bits/stdc++.h>
using namespace std;
struct n{
	int d;
	char c;
}a[2000010]={};
int main(){
	freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
    	cin>>a[i].d>>a[i].c;
	}
	long long co=0;
	int j=m-1,i,j1=a[m-1].d,i1;
	for(i=0;i<j;i++){
		i1=a[i].d;
		while(i<j){
			if(i1<=j1){
				if(a[i].c!=a[j].c)co+=i1;
				j1-=i1;
				i1=0;
				break;
			}else{
				if(a[i].c!=a[j].c)co+=j1;
				i1-=j1;
				j--;
				j1=a[j].d;
			}
		}
	}
	cout<<co;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
