#include <iostream>
#include <iomanip>
using namespace std;
void searchArray(int number[],int size,int value){
    int result =-1;
    for (int i=0; i <size;i++){

        if (number[i] == value){
            result = i;
            break;
        }

    }
    cout<<result<<endl;
}

int main(){
    int numbers[] = {1,2,3,4,5};
    searchArray(numbers,size(numbers),2);
    return 0;
}