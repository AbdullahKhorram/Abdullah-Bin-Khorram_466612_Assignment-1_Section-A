#include<iostream>
using namespace std;
int main(){
 
 cout<<"Assignment Question 10"<<endl; //Use Bubble sequence to sort an array
    int swap,h=6;
	int arr[h];
	cout<<"Input elements of the 6 integer array:"<<endl; //input a six element array from the user
	for(int i=0;i<h;i++){
	  cin>>arr[i];
	}
	for(int i=0;i<h-1;i++){ //using two loops and an integer intermediate, the value of each element is compared with its corresponding element
		for(int j=i+1;j<h;j++){                           //and its position is swapped in ascending order
			if(arr[j]<arr[i]){
			swap = arr[j];
			arr[j]=arr[i];
			arr[i]=swap;
			}
		}
	} cout<<"The Sorted Array is:"<<endl;
   	for(int i=0;i<h;i++){
	   cout<<arr[i]<<" ";} return 0; }
