#include<bits/stdc++.h>

using namespace std;

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
    char left[5] = {' ', 'A', 'B', 'C', ' '};
    char right[2] = {'D', 'F'};
    string c1, s1, c2, s2;
    cin>>c1>>s1>>c2>>s2;
    if(c1!=c2) cout<<"0000"<<endl;
    else{
    	cout<<'1';
    	if((s1[0]!=s2[0])||(s1[1]!=s2[1])) cout<<"000"<<endl;
    	else{
    		cout<<'1';
    		char st1 = s1[2];
    		char st2 = s2[2];
    		int cnt=0;
    		for(int i=0; i<2; i++){
    			if(right[i]==st1||right[i]==st2) cnt++;
			}
			if(cnt==1) cout<<"00"<<endl;
			else if(cnt==2) cout<<"11"<<endl;
			else if(cnt==0){
				cout<<'1';
				bool flag=false;
				for(int i=1; i<4; i++){
					if(left[i]==st1){
						if(left[i-1]==st2||left[i+1]==st2){
							flag = true;
							break;
						}
					}
				}
				if(flag) cout<<'1'<<endl;
				else cout<<'0'<<endl;
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}