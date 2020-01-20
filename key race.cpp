#include <bits/stdc++.h>


using namespace std;

int main()
{
	int n,v1,v2,t1,t2;

	cin>>n>>v1>>v2>>t1>>t2;

    int p1=n*v1 +2*t1;
    int p2=n*v2 +2*t2;
    if(p1<p2)cout<<"First\n";
    else if (p1>p2)cout<< "Second\n";
    else cout<<"Friendship\n";






}

