#include <iostream>

using namespace std;

int findMax(int array[], int sizeOfArr){
    int MAX=INT_MIN;
    
    for(int i=0; i<sizeOfArr; i++){
        MAX = max(MAX, array[i]);
    }
    
    return MAX;
}

int main(){
    int sizeOfArr;
    cout<<"Type in the size of an array : ";
    cin>>sizeOfArr;
    
    int array[sizeOfArr];
    int element;
    
    for(int i=0; i<sizeOfArr; i++){
        cout<<"Type in element of the array ["<<i<<"] : ";
        cin>>element;
        array[i] = element;
    }
    
    int* p = NULL;
    p=array;
    
    cout<<"The max : "<<findMax(p, sizeOfArr)<<endl;
    
    
    
    
    
    return 0;
}
