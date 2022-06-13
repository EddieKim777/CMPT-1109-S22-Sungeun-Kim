#include <iostream>

using namespace std;


int compute_check_digit(int arr[], int size) {
    int check_digit;
   
    int sum = 0;
    for (int i = size - 1; i >= 0; i = i - 2) {
        sum += arr[i];
    }
   
    sum *= 3;

    int sum2 = 0;
    for (int i = size - 2; i >= 0; i = i - 2) {
        sum2 += arr[i];
    }
       
    int sum3 = sum + sum2;
   
    check_digit = 10 - (sum3 % 10);
   
    if (sum3 % 10 == 0) 
        check_digit = 0;
    return check_digit;
}



int main()
{
    int arr[20];
    int size = 0;
    int digit = 0;
    cout << "type the size of barcode" << endl;
        cin >> size;
    
    cout << "type barcode digit by digit" << endl;
    
    
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        
            }

    cout << "input code is ";
    for (int i = 0; i < size; i++)
        cout << arr[i];
    cout << endl;
    cout << "compute result is ";
    for (int i = 0; i < size; i++)
        cout << arr[i];
    cout << compute_check_digit(arr, size);


    return 0;
}