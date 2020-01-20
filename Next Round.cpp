#include <iostream>

using namespace std;

int main() {
		  int n,k,a[100],i;
		  cin>>n>>k;
		  for(i=1;i<=n;i++){
		  	cin>>a[i];
		  }
		  int t=a[k],cn=0;
		  for (i=1 ;i<=n;i++){
		  	if(a[i]>=t  &&  a[i]) {
		  		cn++;
		  	}
		  }
		  cout<<cn<<endl;

	return 0;
}
