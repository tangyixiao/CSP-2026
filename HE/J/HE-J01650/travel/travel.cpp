#include <bits/stdc++.h>
using namespace std;
string s,c,a,b,d;
int main (){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s>>c>>a>>b;
	for(int i=0;i<4;i++){
		d[i]='0';
	}
	if(s[0]==a[0]&&s[1]==a[1]){
		d[0]='1';
			if(c[0]==b[0]&&c[1]==b[1]){
				d[1]='1';
					if(c[2]=='A'&&b[2]=='B'||b[2]=='C'    ||c[2]=='B'&&b[2]=='C'||b[2]=='A'    ||c[2]=='C'&&b[2]=='A'||b[2]=='B'  ||c[2]=='D'&&b[2]=='F'  ||c[2]=='F'&&b[2]=='D'){
						d[2]='1';
							if(c[2]-'0'-(b[2]-'0')==1||c[2]-'0'-(b[2]-'0')==-1){
								d[3]='1';
									for(int i=0;i<4;i++){
										cout<<d[i];
											}
												}else{
													for(int i=0;i<4;i++){
														cout<<d[i];
															}
																}
																	}else{
																		for(int i=0;i<4;i++){
																			cout<<d[i];
																				}
																					}
																						}else{
																							for(int i=0;i<4;i++){
																								cout<<d[i];
																									}
																										}
																											}else{
																												for(int i=0;i<4;i++){
																													cout<<d[i];
																														}
																															}
	return 0;
}
