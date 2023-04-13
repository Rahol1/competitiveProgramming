#include <bits/stdc++.h>
using namespace std;

string shortForm(string s){
	int length = s.length();
	int count = s.length()-2;
	string rj = to_string(count);
	string r = s[0] + rj + s[length-1];
	return r;
}

int main(){
#ifndef ONLINE_JUDGE
	//for getting input from input1.txt
	freopen("input1.txt", "r", stdin);
	//for writing output to output.txt
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		if(s.length()<=10){
			cout<<s<<endl;
		}
		else{
			cout<<shortForm(s)<<endl;
		}
		
	}
}