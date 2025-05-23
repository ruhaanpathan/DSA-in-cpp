# include <iostream>
using namespace std;
int Selection_Sort(int arr[], int size){
    int minimum, temp;
    for (int i =0; i<size-1; i++){
        minimum=arr[i];
        for (int j = i ;j<size;j++){
            if(minimum > arr[j]){
                minimum= arr[j];   // min = j;
                temp=j;
            }
        }
        arr[temp]=arr[i];    //swap(arr[min],arr[i]);   no need of temp and manual swap
        arr[i]=minimum;

    }
    for (int i =0 ; i<size;i++){
    cout<<arr[i]<<" ";
    }
}
int main (){
int a [10]={4,6,7,0,44,55,12,3,5,6};
Selection_Sort(a,10);
}