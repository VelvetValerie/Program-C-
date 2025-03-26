#include <iostream>
using namespace std;

int main(){
    int bil [3][4] ={
        {23,44,54,33},
        {86,56,97,36},
        {34,75,69,98}
    };

    cout<< "Tampilkan data :\n";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cout <<bil[i][j]<< "\t";
        }
        cout<< "\n";
    }
}