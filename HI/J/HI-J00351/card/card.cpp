#include<bits/stdc++.h>
using namespace std;

int arr[1000005],brr[10005];
bool vis[10005];

int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
    
    int n,m;
    cin>>n>>m;
    
    for(int i=1;i<=n;i++){
    	cin>>arr[i];
	} 
	
//	stack<int> s;
//	for(int j=1;j<=n;j++){
//		for(int i=j;i<=n;i++){
//		if(!vis[arr[i]]){
//			s.push(arr[i]);
//			vis[arr[i]]=true;
////			cout<<arr[i]<<" "; 
//		}else{
//			while(!s.empty()){
//				vis[arr[s.top()]]=true;
//				s.pop();
//			}
//			s.push(arr[i]);
////			cout<<arr[i]<<" "; 
//		}
//		}
//	cout<<"\n";
//	while(!s.empty()){
//		int a=s.top(); s.pop();
//		brr[a]++;
//	}			fill(vis,vis+m,0);
//	}
	
	for(int i=1;i<=m;i++){
		cout<<n<<" ";
	}
	
	
	return 0;
} 


