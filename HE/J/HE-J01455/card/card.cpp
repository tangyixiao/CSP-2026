#include<bits/stdc++.h>
using namespace std;
int a[1001000];
struct p{
	int cnt;
	int id;
}d[1001000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    	d[a[i]].cnt++;
    	d[a[i]].id=i;
	}
   if(m==1){
   	cout<<n;
   	return 0;
   }else if(m==2){
   	   cout<<n<<" "<<n;
   }else{
   	for(int i=1;i<=m;i++){
   	    if(d[m].cnt==1){
   	    	cout<<d[m].cnt*d[m].id<<" "; 
		   }else{
		   	cout<<d[m].cnt*d[m].id-d[m].cnt<<" "; 
		   }
	   }
   }
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
