//
//  Rachel Roegiers
//  CS 172-1
//  HW05
//  11.1: Anayze Input
//

#include <iostream>
using namespace std;

// asking user for the size of the array
//void promptCount (int* size){
  //  cout << "How many numbers are you going to enter? " << endl;
    //cin >> *size;
//}

// putting each number the user enters into the array
//void numsArray(int* numbers, int size){
  //  for (int* numero = numbers; numero < numbers + size; numero++){
      // cout << "Enter number: " << endl;
    //    cin >> *numero;
  //  }
//}

// allocating the array
//int* allocArray(int size){
   // int* inputArray = new int[size];
    //for (int i = 0; i < size; i++)
    //    inputArray[i] = 0;
  //  return inputArray;
//}

// calculating the average of the array
//double average(int* numbers, int size){
  //  int sum = 0;
    //for(int i = 0; i < size; i++){
      // sum += *(numbers + i);
   // }
    //return double (sum)/ double (size);
//}


//how many numbers are above the average


int main()
{
    //promptCount(&nums);
    //int* numbers = allocArray(nums);
   // numsArray(numbers, nums);
    //cout << "The average of the numbers are: " << average(numbers, size) << endl;
    
    
    // ** thought of an easier way to do it for me... that's why I commented everything out above.
    
    // declaring variables
    int i, j, nums, size, sum = 0, count = 0;
    double average;
    
    // pointer variable
    int* numbers;
    
    // ask user to imput size of the array
    cout << "How many numbers are you going to enter? " << endl;
    cin >> size;
    
    numbers = new int[size];
    // user will enter the numbers and they will be imputed into the array
    cout << "Enter an integer: " << endl;
    for(i=0; i < size; i++){
        cin >> nums;
        *(numbers + i) = nums;
        sum += nums;
    }
    
    // calculating the average of the numbers inputed
    average = sum/ size;
    cout << "The average of the numbers is: " << average << endl;
    // caculating the amount of numbers above the average
    cout << "The number(s) above the average are " ;
    for (j = 0; j < size; j++){
        if (*(numbers + j) > average)
        {
            cout << *(numbers +j)<< " ";
            count ++;
        }
    }
    cout << endl;
    
    cout << "The total amount of numbers above the average is : " << count << endl;
    
    return 0;
}