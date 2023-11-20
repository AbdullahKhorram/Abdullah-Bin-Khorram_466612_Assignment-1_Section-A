#include<iostream>
#include<string>
using namespace std;
int main(){
	cout<<"Assignment Question 5"<<endl;
	cout<<endl;
	string S,Q;
	cout<<"Enter your first string:"<<endl;
	cin>>S;
	cout<<"Enter your second string:"<<endl;
	cin>>Q;                                        //input two strings by the user
	if(S!=Q){                                           //check if both strings are equal are not
		cout<<"Both strings are unequal."<<endl;
	} 
	else {cout<<"Both strings are equal,hence the reverse of the second string is:"<<endl;     //if equal, reverse the second string using a for loop
	for(int i=0;i<=Q.length();i++){   //loop will run for an integer i, which will run 0 times to the number of times the length of the string
	cout<<Q[Q.length()-i]; } }     //cout will be the second string, but the last character will be printed since the rest of the characters are 
	return 0;                          //elminiated, as i increases, second last character is printed and the rest get eliminated, and so on
}
