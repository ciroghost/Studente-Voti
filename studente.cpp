#include <iostream>
using namespace std;

class Studente{
     public:
         string nome;
         string cognome;
         string classe;
         void media();
};

    void Studente::media(){
        int numeroVoti = 10;
        int voti[numeroVoti];
        float media;
           for(int i = 0; i<numeroVoti; i++ ){
          cout<<"Inserisci il"<<(i+1)<<"* voto: ";
          cin>>voti[10];

           }

           float somma=0;
           for(int i = 0; i<numeroVoti; i++){
                somma=somma+voti[numeroVoti];


    }
         cout<<"La somma dei voti e' :" << somma<<endl;
         media=(float)somma/(float)numeroVoti;
         cout<<"La media dei voti e' :"<<media<<endl;
}



int main(){
    Studente Obj;
    cout<<"Inserisci il nome dello studente :"<<endl;
    cin>>Obj.nome;
    cout<<"Inserisci il cognome dello studente :"<<endl;
    cin>>Obj.cognome;
    cout<<"Inserisci la classe dello studente :"<<endl;
    cin>>Obj.classe;

    cout<<"Inserisci i 10 voti della pagella di questo studente"<<endl;
    Obj.media();


   return 0;
}