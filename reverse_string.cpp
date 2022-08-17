#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


//User function Template for C++

string reverseWord(string str){

 int n=str.length();
 for(int i=0;i<n;i++){
   if(i<n/2){
        char t= str[i];
    str[i]=str[n-i-1];
    str[n-i-1]=t;
   }
 }
  return str;
  
}
