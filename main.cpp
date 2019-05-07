#include <iostream>

using namespace std;

void printPrime (int range){
    bool *flags = new bool[range];
    for (auto i = 0; i < range; ++i){
        flags[i] = true;
    }
    flags[0] = false;        // becaseu 1 is not prime number;
    for (auto i = range - 1; i >= 1; --i){
        for (auto j = i; j >= 1; --j){
            if (((i + 1) % (j + 1)) == 0 && i != j){
                flags[i] = false;
            }
        }
    }
    int count = 0;
    cout << "Prime numbers between 0-" << range << " are: \n";
    for (auto i = 0; i < range; ++i){
        if (flags[i] == true){
            count += 1;
            cout << i + 1;
            if(!(count % 5)){
                cout << endl;
                count = 0;
            }
            else if(i < range){
                cout << ",";
            }
        }
    }
    cout << "End\n";
}

int main (){
    int range = 0;
    cout << "What is the range you want to print prime number of?\n";
    cin >> range;
    printPrime(range);
    return 0;
}


