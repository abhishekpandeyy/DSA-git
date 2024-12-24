/*Given a number N, the task is to print the numbers from 1 to N. 
using recursion
Examples: 
Input: N = 10 
Output: 1 2 3 4 5 6 7 8 9 10
Input: N = 7 
Output: 1 2 3 4 5 6 7
*/
#include<iostream>

void fun1(int N){
    //base case 
    if(N==0)
    return;
    else{
        // fun1() call itself with one changes in parameter
        fun1(N-1);
        std::cout<<N<<"  ";
    }
}


/*
Print N to 1 Using Recursion

Given a number N, the task is to print the numbers from N to 1.
Examples: 

Input: N = 10 
Output: 10 9 8 7 6 5 4 3 2 1
Input: N = 7 
Output:7 6 5 4 3 2 1 
*/


void fun2(int num){
if(num==0)
return ;
std::cout<<num<<" ";
fun2(num-1);
}

//main function
int main()
{
    int n;
    std::cout<<"enter the value of N : ";
    std::cin>>n;
    // fun1(n); print 1 to N;
    fun2(n);


}
