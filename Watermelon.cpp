#include <bits/stdc++.h>
using namespace std;


int main(){
#ifndef ONLINE_JUDGE
	//for getting input from input1.txt
	freopen("input1.txt", "r", stdin);
	//for writing output to output.txt
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin>>n;
	if(n==2){
		cout<<"NO"<<endl;
	}
	else{


	int x = n%2;
	if(x==0){
		if(x%2==0){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		
		
	}
	else{
		cout<<"NO"<<endl;
	}
}
}