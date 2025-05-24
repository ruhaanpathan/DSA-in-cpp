# include <iostream>
using namespace std;

void Bubble_Sort(int arr[],int size){
    bool swapped = false;
    for (int i = 0;i<size-1;i++){
        for( int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        } 
        if(swapped==false){
            // Already sorted
            break;
        }
    }
    for (int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int a [15]={4,6,7,0,44,55,12,3,5,99,1,33,88,444,33324};
    Bubble_Sort(a,15);
}