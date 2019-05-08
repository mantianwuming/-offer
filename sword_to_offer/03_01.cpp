#include <iostream>

using namespace std;

bool duplicate(int numbers[], int length, int* duplication){
    if(numbers == nullptr || length <= 0)
        return false;
    for(int i = 0; i < length; i++){
        if(numbers[i] < 0 || numbers[i] > length - 1)
            return false;
    }
    for(int i = 0; i < length; i++){
        while(numbers[i] != i){
            if(numbers[i] == numbers[numbers[i]]){
                *duplication = numbers[i];
                return true;
            }
            int temp = numbers[i];
            numbers[i] = numbers[temp];
            numbers[temp] = temp;
        }
    }
}



int main(){
    int numbers[] = {2,1,3,0,2};
    int length = 5;
    int* duplication;
    cout << duplicate(numbers, length, duplication) << endl;
    cout << * duplication << endl;
}
