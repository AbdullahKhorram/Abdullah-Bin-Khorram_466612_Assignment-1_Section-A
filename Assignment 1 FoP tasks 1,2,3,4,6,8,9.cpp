#include<iostream>
using namespace std;
int main(){
	cout<<"Assignment Question 1"<<endl; // Program to display factors of a number using for loops
	int n,p;
	cout<<"Please Enter the number whose factors you wish to find:"<<endl;
	cin>>n;
	cout<<"The Factors for "<<n<<" are:"<<endl;
	for(p=1;p<=n;p++){ 
	if(n%p==0){ //if any number from 1 to n has 0 remainder when dividing n, that number is a factor of n
	cout<<p<<endl;
	}
	}
	cout<<endl;
	
	cout<<"Assignment Question 2"<<endl; //program to display a statement with a condition
   int x = 5;
   int y = 10;
   if (x == 5){
   if (y == 10){
   cout << "x is 5 and y is 10" << endl;}
   else{cout << "x is not 5" <<endl;}
    }
   cout<<endl;
   
   cout<<"Assignment Question 3"<<endl; //program to check if a number is greater than 10 or less than or equal to 20
   int k;
   cout<<"Please Enter Your Number to check if it falls within the range (10,20]:"<<endl;
   cin>>k;
   if(k>10){
   if(k<=20){cout<<"1"<<endl;} //nested if is used to check this condition
	}
	else{ cout<<"0"<<endl; }
	 
	cout<<"Assignment Question 4"<<endl; //program to find largest integer closest to a known integer
	 int X,Y= 0;
    cout << "Input an integer value: "<<endl;
    cin>>X; //input an integer value by the user
    for (int d= X;d>= 1;d--)   //use a for loop that will run from one till the number
    {
        for (int h = 2; h<=(d-1); h++)  //for each value of d, divide it by h, which will be every integer from 2 to h-1
        {
            if (d % h == 0) 
                Y++; //if d is divisible by h, incrementally add to the value of Y
        }
        if (Y==0)  //if Y is 0, then the number was prime
        {
            cout<<"The Greatest Prime Number is: "<<d<< endl; //
            break;
        }
        Y = 0;
    } 
	
	cout<<"Assignment Question 6"<<endl; //program to do division without using the / operator
	int divid,divis,quot,remain;
	cout<<"Enter the dividend:"<<endl;
	cin>>divid;
	cout<<"Enter the divisor:"<<endl;
	cin>>divis;
	if(divid<divis || divis==0){ cout<<"ERROR, run the program and try again."<<endl;} //divident must be greater than the divisor which must never 
	else{  																										//be zero
    quot=0;
	remain=divid;      //if the divis is subtracted from the divid n number of times without the divisor exceeding the value of the divid,
    while(remain>=divis){                       // n is then the quotient and the last remaining value is the remainder
    remain=remain-divis;
    quot=quot+1; } }
     
    cout<<"Quotient of the division is: "<<quot<<endl;
    cout<<"Remainder of the division is: "<<remain<<endl;
    cout<<endl;
    
    
    cout<<"Assignment Question 8"<<endl; //print an array after having added elements to it
	int v=8;
	cout<<"Elements of the array after alteration :"<<endl;   
    int a[v]={1,2,3,4,5,6,7,8};
    for(int j=0;j<v;j++){
    cout<<a[j]<<" ";
	}
	cout<<endl;
	cout<<endl;
    
    cout<<"Assignment Question 9"<<endl; //check if the sum of a triplet in an array is equal to a known integer
    int asum,wasp,m,s,t,Q;
 cout<<"NOTE:If condition is true, '1' will be printed 3 times. If condition is false, it will be printed twice."<<endl;
    cout<<"Enter the integer:"<<endl;
    cin>>Q;
    cout<<"Enter the number of elements in the array:"<<endl;    //input an integer and an array from the user
    cin>>m;
	int arr[m];
	cout<<"Input elements of the array:"<<endl;  
	for(int l=0;l<m;l++){
	  cin>>arr[l];
	}
	for(int l=0;l<m-1;l++){
		for(int p=l+1;p<m;p++){
			if(arr[p]<arr[l]){
			wasp = arr[p];           //first sort the array in ascending order
			arr[p]=arr[l];
			arr[l]=wasp;
			}
		}
	} for(int l=0; l<m-2;l++){
	 s= l+1;
	 t= m-1;
	 while(s<t){ asum= arr[l] + arr[s] + arr[t];   //add the first element, the next element that incrementally increased by (s), and the last element
	 if (asum>Q){t--; }                                                  //which incrementally decreased by 1 (t)and continue the loop until s<t
	 if (asum<Q){ s++; } 
	 if (asum=Q){ cout<<"1"; break;  }  //111 will be printed if statement is true, 11 if not
	 } }

   
	return 0; }
