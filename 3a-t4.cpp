#include<iostream> 
#include<limits> 
using namespace std; 
int main() 
{ 
int k, i=1, sum=0 , n; 
cout«"Enter the amount of integers to sum ";  //ask for the number of int
cin»k; 
while (i <= k) { 
 cout«"Enter an integer number\n"; //ask a user to enter an int
cin»n; 
while(1) 
{ 
if(cin.fail()) 
{ 
cin.clear(); 
cin.ignore(numeric_limits<streamsize>::max(),'\n'); // ignores the incorrect input 
cout«"You have entered wrong input"«endl; // tells the user to try again
cin»n;
} 
if(!cin.fail()) 
break; 
} 
sum += n; // add inputted integer to sum
i++; // increase the index variable 
} 
cout « " The total sum of " « k « " integers is: " « sum; 
return 0; 
}
