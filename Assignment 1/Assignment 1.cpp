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

int return_length(int seletion) {
    
    if (seletion == 1) {
        int size = 8;
        return size;
    }
    else if (seletion == 2) {
        int size = 12;
        return size;
    }
    else if (seletion == 3) {
        int size = 13;
        return size;
    }
    else if (seletion == 4) {
        int size = 14;
        return size;
    }
    else if (seletion == 5) {
        int size = 18;
        return size;
    }


    
}





int main()
{
    int arr[20];
    int selection = 0;
    
   
   
    cout << "Select barcode type" << endl;
    cout << "1. EAN-8" << endl;
    cout << "2. UPC-A" << endl;
    cout << "3. EAN-13" << endl;
    cout << "4. EAN-14" << endl;
    cout << "5. SSCC" << endl;
    cin >> selection;

    return_length(selection);

          
    
    cout << "type barcode digit by digit" << endl;
    
    
    for (int i = 0; i < return_length(selection) - 1 ; i++) {
        cin >> arr[i];
        
            }

    cout << "input code is ";
    for (int i = 0; i < return_length(selection) - 1; i++)
        cout << arr[i];
    cout << endl;
    cout << "compute result is ";
    for (int i = 0; i < return_length(selection) - 1; i++)
        cout << arr[i];
    cout << compute_check_digit(arr, return_length(selection)-1);


    return 0;
}