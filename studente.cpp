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
    class Note: public Studente{
    public:
          int risposta;
          int nuovaNota;
          int scritta;
          void rispostaNota();
          void Inserimento();
    };

        void Note::rispostaNota(){
            cin>>risposta;
            if(risposta==1){
                cout<<"Questo studente ha delle noti disciplinari"<<endl;
            }else
                cout<<"Questo studente non ha delle noti disciplinari"<<endl;
    }
          void Note::Inserimento(){
          cin>>nuovaNota;
          if(nuovaNota==1){
              cout<<"Ok Inserisci la nota"<<endl;
              cin>>scritta;
          }  else
              cout<<"Ok allora sospendo il programma"<<endl;
        }

           class Data: public Studente{
            public:
              int tempo;
              int numero;
              void Anno();

           };

           void Data::Anno(){
               cin>>tempo;
                if(tempo==1){
                    cout<<"Ok inserisci la data di iscrizione"<<endl;
                }

                cin>>numero;

               if(numero==2021){
                   cout<<"Lo studente fa parte dell'anno 2021/2022"<<endl;
               } else
                   if(numero==2020){
                       cout<<"Lo studente fa parte dell'anno 2020/2021"<<endl;
                   } else
                       cout<<"Lo studente fa parte dell'anno 2019/2020"<<endl;
           }


int main(){
    Studente Obj;
    Note ObjNota;
    Data ObjStudente;
    int scelta;
    cout<<"Inserisci il nome dello studente :"<<endl;
    cin>>Obj.nome;
    cout<<"Inserisci il cognome dello studente :"<<endl;
    cin>>Obj.cognome;
    cout<<"Inserisci la classe dello studente :"<<endl;
    cin>>Obj.classe;

    cout<<"Inserisci i 10 voti della pagella di questo studente "<<endl;
    Obj.media();

    cout<<"Scegli la funzione: [ 1 verifica note - 2 inserisci nota - 3 inserisci anno scolastico]"<<endl;
    cin>>scelta;

     switch(scelta){
   case 1:
     cout<<"Questo studente ha delle note disciplinari [1=si/ 0=no]?"<<endl;
     ObjNota.rispostaNota();
    break;

   case 2:
    cout<<"Vuoi inserire una nuova nota [1=si/ 0=no]?"<<endl;
    ObjNota.Inserimento();
    break;

    case 3:
    cout<<"Vuoi identificare l'anno scolastico dello studente [1=si/ 0=no]?"<<endl;
    ObjStudente.Anno();
    break;

   default:
      cout<<"Opzione non disponibile"<<endl;


    }

   return 0;
}
