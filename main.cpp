#include <iostream>

using namespace std;

struct essai
{
    int n;
    float x;
};

void raz_adresse(essai* S_ESSAI);
void raz_reference(essai& S_ESSAI);

struct essai S_ESSAI_ADR;
struct essai S_ESSAI_REF;

int main()
{
    cout << "Entrer entier n : ";
    cin >> S_ESSAI_ADR.n;
    S_ESSAI_REF.n = S_ESSAI_ADR.n;

    cout << "Entrer reel x : ";
    cin >> S_ESSAI_ADR.x;
    S_ESSAI_REF.x = S_ESSAI_ADR.x;

    cout << endl <<  "Remise a zero par adresses" <<endl;
    cout << "n saisi :" << S_ESSAI_ADR.n << ", x saisi: " << S_ESSAI_ADR.x << endl;
    raz_adresse(&S_ESSAI_ADR);
    cout << "n raz par adresses:" << S_ESSAI_ADR.n << ", x raz par adresses: " << S_ESSAI_ADR.x << endl;

    cout << endl <<  "Remise a zero par references" <<endl;
    cout << "n saisi :" << S_ESSAI_REF.n << ", x saisi: " << S_ESSAI_REF.x << endl;
    raz_reference(S_ESSAI_REF);
    cout << "n raz par references:" << S_ESSAI_REF.n << ", x raz par references: " << S_ESSAI_REF.x << endl;


    return 0;
}

//Fonction raz par adresses
void raz_adresse(essai* ptessai)
{
    (*ptessai).n = 0;
    (*ptessai).x = 0;
}

//Fonction raz par références
void raz_reference(essai& ptessai)
{
    ptessai.n = 0;
    ptessai.x = 0;
}
