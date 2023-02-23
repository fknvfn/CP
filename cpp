#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int m, n;
    float arr[m][n];

    srand(time(0));
    m=3+(rand()%4);
    n=4+(rand()%4);
    //заполнение массива от -10 до 10
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
         arr[i][j]=rand() % 21 - 10;
        }
    } 
    //вывод чисел
    cout << "Array: " << endl;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
        cout << arr[i][j] << " ";
        }
        cout << endl;
    } 
    /* проверка размера
    cout << m << endl;
    cout << n << endl; */
    return 0;
}
