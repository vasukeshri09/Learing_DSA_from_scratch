// earning 2d array 

#include <iostream>
using namespace std;

int main(){
    int arr[3][4];
    cout << "enter element of the array" << endl;
    // input
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j<4; j++)
        {
            cin >> arr[i][j];
        }
    }
    // print the array

    for (int i = 0; i < 3; i++){
        for(int j = 0; j<4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}