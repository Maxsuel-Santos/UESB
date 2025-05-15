#include <iostream>
#include <cctype>
//#include <iomanip>

using namespace std;

void media(float n1, float n2, float n3, float &mediaA, float &mediaP, float &mediaH);

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    //cout << fixed << setprecision(2);

    float a = 0, b = 0, c = 0, mediaA, mediaP, mediaH;
    char resp;

    while(true) {
        cout << "Digite três números em sequência: ";
        cin >> a >> b >> c;

        media(a, b, c, mediaA, mediaP, mediaH);

        cout << endl << 
        "MA = " << mediaA << endl << 
        "MP = " << mediaP << endl << 
        "MH = " << mediaH << endl << endl;
        
        cout << "Quer calcular médias de novo? Digite S/N: ";
        cin >> resp;

        if(tolower(resp) != 's') break;
        else continue;
    }

    return 0;
}

void media(float n1, float n2, float n3, float &mediaA, float &mediaP, float &mediaH) {
    mediaA = (n1 + n2 + n3) / 3;
    mediaP = ((n1 * 1) + (n2 * 3) + (n3 * 6)) / (1 + 3 + 6);
    mediaH = (3) / ((1 / n1) + (1 / n2) + (1 / n3));
}