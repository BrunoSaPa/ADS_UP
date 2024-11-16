#include <iostream>
using namespace std;

int main()
{

    /*
    int aux =0;
    for(int i = 0; i < 100; i++){
        aux =0;
        if(i < 10){
            aux = i % 10;
        }

        if(i > 10){
            aux = i % 10;
            aux += aux / 10 % 10;
        }

        if(aux == 3){
            x++;
        }
    }*/

    //number of numbers that are divisible by 3
    int x= 0;

    for(int i = 1; i < 100; i++){
        if(i % 3 == 0){
            x++;
        }
    }

   int arr[x];
   int index = 0;

    for (int i = 1; i < 100; i++){
        if (i % 3 == 0){
            arr[index++] = i;
        }
    }

    //print the array in the array
    for (int i = 0; i < x; i++){
        cout << "The number " << arr[i] << " is divisible by 3\n";
    }

    return 0;
}