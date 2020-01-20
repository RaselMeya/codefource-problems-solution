#include <bits/stdc++.h>
using namespace std;

int main() {

	int  p,v,t,n;
	int co=0;

	cin>>n;
	for(int i =1; i<=n; i++){
		cin>>p>>v>>t;
		if((p==1 &&v==1 )||(p==1 && t==1)||(p==1 && v==1&&t==1)||(v==1 && t==1 )){
			co++;
		}
	}
	cout<<co<<endl;

	return 0;
}
