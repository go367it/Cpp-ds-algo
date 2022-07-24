#include<iostream>

using namespace std;

void insertionSort(int limit, int arr[]){
    for(int i=0; i<limit; i++){
        int j = i;
        if(i != 0){
            while(j>0 && arr[j-1] > arr[j]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
        }
    }

    for(int i =0; i<limit; i++){
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
    insertionSort(limit, arr);
    return 0;
}