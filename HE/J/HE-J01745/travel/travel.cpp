#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	int sum,ans;
	cin>>a;
    for(int i=1;i<=3;i++){
		cin>>b[i];
		sum=b[3];
		}
	cin>>c;
		for(int j=1;j<=3;j++){
		cin>>d[j];
		ans=d[3];
		}
	if(a!=c){
		cout<<"0000";
		return 0;
	}
	if(a==c){
		cout<<"1";
	}
	 if(b[1]==d[1]&&b[2]==d[2]){
		cout<<"1";}	else{
			cout<<"0";
		}
	if(b[1]==d[1]&&b[2]==d[2]){
	 if(sum=='A'||sum=='B'||sum=='C')	{
		if(ans=='A'||ans=='B'||ans=='C'){
			cout<<"1";
		}else if(ans!='A'||ans!='B'||ans!='C'){
			cout<<"0";
		}
	}else if(sum=='D'||sum=='F'){
		if(ans=='D'||ans=='F'){
			cout<<"1";
	}else{
		cout<<"0";
	}}else{
		cout<<"0";}
	}else{
		cout<<"0";
	}
	if(b[1]==d[1]&&b[2]==d[2]){
	 if(sum=='A'||sum=='B'||sum=='C')	{
		if(ans=='A'||ans=='B'||ans=='C'){
			if(sum=='A'&&ans=='B'){
			cout<<"1";}else if(sum=='A'&&ans!='B'){
				cout<<"0";
			}
			else if(sum=='B'){
				if(ans=='A'||ans=='C'){
					cout<<"1";
				}else{
					cout<<"0";
				}
				
				}else if(sum=='C'&&ans=='B'){
					
					cout<<"1";}
					else if(sum=='C'&&ans!='B'){
					
					cout<<"0";
				
				}else if(sum!='C'&&ans=='B'){
					
					cout<<"0";
				
				}
				
				
		
		}else{
			cout<<"0";
		}
	

}else if(sum=='D'&&ans=='F'){
	if(sum=='D'&&ans=='F'){
		cout<<"1";
	} else if(ans=='D'&&sum=='F'){
		cout<<"1";
	}else{
		cout<<"0";
	}
		}else{
	cout<<"0";
			}
}else{
	cout<<"0";
}
cout<<endl;
}

