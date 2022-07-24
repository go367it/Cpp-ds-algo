#include<iostream>

using namespace std;

void bubbleSort (int limit, int arr[]) {

    for(int i = 0; i< limit; i++){
        for(int j=0; j< limit; j++){
            
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // for printing the array
     for(int i =1; i<=limit; i++){
        cout<< arr[i];
    }
}

int main(){

    cout <<"Enter Limit: ";
    int limit;
    cin >> limit; // taking the array limit
    int arr[limit]; // declaring an array and assigning the limit to it
    cout<<"\n Enter the array details: \n";
    for(int i=0; i<limit; i++){
        cin >> arr[i];
    }

    bubbleSort(limit, arr);

    return 0;
}