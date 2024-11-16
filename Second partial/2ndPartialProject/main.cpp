#include <iostream>
using namespace std;
#include <ctime>

int checkIDNumOfDigits(int ID);
void multiplyMatrix(int k[2][2], int IDmatrix[2][2], int timeMatrix[2][2], int prime);
void populateTimeMatrix(int timeMatrix[2][2]);

//the intention of this demo is to show how my algo will work (and to pass the class why not hehe :D ) ik its not even close to being reliable but it helped me to learn how the actually great and proven algorithms work

int main(){
    // this is the token that should be generated when we are getting our UP card, its only known by the university and the card
    int k[2][2]={
        {65,88},
        {198,3}
    };
    //our prime number will be 199 on this demo
    int prime = 199;

    // we are gonna ask for the ID of the student for this demostration, in real life it will be stored on the card and the servers in the uni
    int ID;
    cout << "Enter your id: ";

    while (checkIDNumOfDigits(ID) != 7){
        cout << "Your id must contain 7 digits (XXXXXXX)";
        cin >> ID;
    }

    int IDmatrix[2][2];
    //populate id matrix
    IDmatrix[0][0] = ID / 100000;       
    IDmatrix[0][1] = (ID / 1000) % 100;  
    IDmatrix[1][0] = (ID / 10) % 100;    
    IDmatrix[1][1] = ID % 10;      

    //output the matrix for verification
    cout << "Checking ID matrix: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << IDmatrix[i][j] << " ";
        }
        cout << endl;
    }

    int timeMatrix[2][2];
    populateTimeMatrix(timeMatrix);

    cout << "Time matrix: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << timeMatrix[i][j] << " ";
        }
        cout << endl;
    }

    multiplyMatrix(k, IDmatrix, timeMatrix, prime);

    return 0;
}

int checkIDNumOfDigits(int ID){
    int digits = 0;
    while (ID != 0) {
        ID /= 10;
        digits++;
    }
    return digits;
}


void multiplyMatrix(int k[2][2], int IDmatrix[2][2], int timeMatrix[2][2], int prime){
    int result[2][2]; 
    int finalResult[2][2];

    //k * IDmatrix
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = 0;
            for (int l = 0; l < 2; l++) {
                result[i][j] += k[i][l] * IDmatrix[l][j];
            }
            result[i][j] %= prime;
        }
    }


    cout << "k * IDmatrix: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    //result * timeMatrix 
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            finalResult[i][j] = 0; 
            for (int l = 0; l < 2; l++) {
                finalResult[i][j] += result[i][l] * timeMatrix[l][j]; 
            }
            finalResult[i][j] %= prime; 
        }
    }

    cout << "Final matrix: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << finalResult[i][j] << " ";
        }
        cout << endl;
    }
}

void populateTimeMatrix(int timeMatrix[2][2]){
    time_t now = time(0);
    tm *ltm = localtime(&now);
    timeMatrix[0][0] = 1900 + ltm->tm_year; 
    timeMatrix[0][1] = 1 + ltm->tm_mon;    
    timeMatrix[1][0] = ltm->tm_mday;    
    timeMatrix[1][1] = ltm->tm_hour * 3600 + ltm->tm_min * 60 + ltm->tm_sec; 
}