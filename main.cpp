#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        arr[i] = rand()%(2025-1991+1);
        cout << arr[i] << " ";
    }
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n- i -1; j++){
            if (arr[j] > arr[j + 1]){
                auto t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
