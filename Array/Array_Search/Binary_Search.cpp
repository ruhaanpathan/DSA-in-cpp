# include <iostream>
using namespace std;
int Search(int a[], int Element, int Size){

    int start = 0;
    int end = Size-1; 
    int mid = start+((end - start)/2);   

    while (start<=end){

        if(a[mid]<Element){
            start=mid+1;
        }
        else if(a[mid]>Element){
            end=mid-1;
        }
        else if(a[mid]==Element){
            return mid;
        }

        mid = start+((end - start)/2);   

    }

    return -1;

}

int main(){

    int a [5]={1,2,3,4,5};
    int ans= Search(a,3,5);
    cout<<ans;
    return 0 ;
}