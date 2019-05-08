#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*length Ϊ�ַ�����str�������������ڻ�����ַ���str��ʵ�ʳ���*/
void ReplaceBlank(char str[], int length){
    if(str == nullptr || length <= 0)
        return;

    /*originalLength Ϊ�ַ���str��ʵ�ʳ���*/
    int originalLength = 0;
    int numberOfBlank = 0;
    int i = 0;
    while(str[i] != '\0'){
        originalLength++;
        if(str[i] == ' ')
            numberOfBlank++;
        ++i;
    }

    /*newLength Ϊ�ѿո��滻��'%20'֮��ĳ���*/
    int newLength = originalLength + numberOfBlank * 2;
    if(newLength > length)
        return;

    int indexOfOriginal = originalLength;
    int indexOfNew = newLength;
    while(indexOfOriginal >= 0 && indexOfNew > indexOfOriginal){
        if(str[indexOfOriginal] == ' '){
            str[indexOfNew--] = '0';
            str[indexOfNew--] = '2';
            str[indexOfNew--] = '%';
        }
        else
            str[indexOfNew--] = str[indexOfOriginal];

        indexOfOriginal--;
    }
}

int main(){
    const int length = 100;
    char str[length] = "hello world.";
    ReplaceBlank(str, length);
    cout << str << endl;
}
