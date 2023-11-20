 #include<iostream>
 #include<string.h>
 using namespace std;
 int main(){
 	
 cout<<"Assignment Question 7"<<endl; //program to eliminate all duplicate characters from a string
  string S,newS;
  int i,j;
  cout<<"Enter a string:"<<endl; //input a string from the user
  cin>>S;
  cout<<endl;
  for(i=0;i<S.length();i++){ 
  	for( j=0;j<S.length();j++){  //using two loops, for every character in the string, it is compared with each character starting from the first
  	if(S[i]==S[j]){ 
	 break; }          //if it matches a character, it is printed and the loop breaks, then the cycle is repeated. If a duplicate character matches with
	} if(i==j){    //a character, then the character is not re-printed, but instead the loop breaks and the outer loop continues for the next character
	 newS+=S[i]; } 
  } cout<<"New String without any duplicate characters: "<<newS; //cout the new string
 return 0;
}
