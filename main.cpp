/*******************************************************************************/
// Cristian De Jesus Adames   y00658533
// Rodddiel De Jesus Ramos    y00659924
// Jose canales Quinones      m00642532

#include <iostream> // Libreria de entrada y salida de datos.
#include <cstdlib> // Para la función rand().
#include <ctime> // se usa para generar numeros random usando el tiempo actual.
#include <iomanip> // se usa para manipular la salida de datos.
#include <cmath>// para redondear.

using namespace std;


int main() {

  srand(time(0)); // crea un numero random usango la hora de la computadora
  int opcion, numjuego=0, dificultad, dificultades[20], puntuaciones[20];
  string jugardenuevo;
  bool repite = true, volverajugar = true;
 
 
while(volverajugar){
 
  while(repite){//empieza el while para input validation de la dificultad (1-3)

    cout<<"Dificultad 1: Facil (1-10) suma y resta."<<endl;
    cout<<"Dificultad 2: Medio (1-50) suma y resta (1-10) multiplicacion."<<endl;
    cout<<"Dificultad 3: Dificil (1-100) suma y resta (1-15) multiplicacion y division."<<endl;
   
    cout<<"\nQue dificultad quieres jugar(1-3)? ";
    cin>>opcion;
    if(opcion<1 || opcion>3){
      cout<<"Opcion invalida, elige un numero entre 1 y 3."<<endl;
    } else {repite=false;}
   
  }//acaba el while

  //Empieza el switch para la dificultad ///////////////////////////////////////////////
bool correcto=true;
double respuesta, num1, num2;
int puntuacion=0, SRMD;
 
  switch(opcion){
    case 1:
    dificultad=1;
      cout<<"Entraste a suma y resta (1-10)"<<endl;
      while(correcto){
        num1=rand()%11;
        num2=rand()%11;
        SRMD=rand()%2;
        ///////////////////////////////SUMA////////////////////////////////////////
        if(SRMD==0){
            cout<<"Cuanto es "<<num1<<" + "<<num2<<": ";
            cin>>respuesta;
            if(respuesta == num1+num2){
                cout<<"Correcto!"<<endl;
                puntuacion++;
                cout<<"Tienes "<<puntuacion<<" puntos!"<<endl;
            } else {
                cout<<"La contestacion fue incorrecta la respuesta es: "<<num1+num2<<endl;
                correcto=false;
                cout<<"Terminaste con "<<puntuacion<<" puntos!"<<endl;
            }
        }
        ///////////////////////////////RESTA/////////////////////////////////////////
        if(SRMD==1){
            cout<<"Cuanto es "<<num1<<" - "<<num2<<": "; 
            cin>>respuesta;
            if(respuesta == num1-num2){
                cout<<"Correcto!"<<endl;
                puntuacion++;
                cout<<"Tienes "<<puntuacion<<" puntos!"<<endl;
            } else {
                cout<<"La contestacion fue incorrecta la respuesta es: "<<num1-num2<<endl;
                correcto=false;
                cout<<"Terminaste con "<<puntuacion<<" puntos!"<<endl;
            }
        }
      } // termina el while de case 1 //////////////////////////////////////////////////
    break;
    case 2:
    dificultad=2;
      cout<<"Entraste a suma y resta (1-50) y multiplicacion del (1-10)"<<endl;
      while(correcto){
        num1=rand()%51;
        num2=rand()%51;
        SRMD=rand()%3;
        ///////////////////////////////SUMA////////////////////////////////////////
        if(SRMD==0){
            cout<<"Cuanto es "<<num1<<" + "<<num2<<": ";
            cin>>respuesta;
            if(respuesta == num1+num2){
                cout<<"Correcto!"<<endl;
                puntuacion++;
                cout<<"Tienes "<<puntuacion<<" puntos!"<<endl;
            } else {
                cout<<"La contestacion fue incorrecta la respuesta es: "<<num1+num2<<endl;
                correcto=false;
                cout<<"Terminaste con "<<puntuacion<<" puntos!"<<endl;
            }
        }
        ///////////////////////////////RESTA/////////////////////////////////////////
        if(SRMD==1){
            cout<<"Cuanto es "<<num1<<" - "<<num2<<": ";
            cin>>respuesta;
            if(respuesta == num1-num2){
                cout<<"Correcto!"<<endl;
                puntuacion++;
                cout<<"Tienes "<<puntuacion<<" puntos!"<<endl;
            } else {
                cout<<"La contestacion fue incorrecta la respuesta es: "<<num1-num2<<endl;
                correcto=false;
                cout<<"Terminaste con "<<puntuacion<<" puntos!"<<endl;
            }
        }
        /////////////////////////////MULTIPLICACION/////////////////////////////////
            if(SRMD==2){
            num1=rand()%11;
            num2=rand()%11;    
            cout<<"Cuanto es "<<num1<<" * "<<num2<<": ";
            cin>>respuesta;
            if(respuesta == num1*num2){
                cout<<"Correcto!"<<endl;
                puntuacion++;
                cout<<"Tienes "<<puntuacion<<" puntos!"<<endl;
            } else {
                cout<<"La contestacion fue incorrecta la respuesta es: "<<num1*num2<<endl;
                correcto=false;
                cout<<"Terminaste con "<<puntuacion<<" puntos!"<<endl;
            }
        }
      } // termina el while de case 2 ///////////////////////////////////////////////
    break;

    case 3:
    dificultad=3;
      cout<<"Entraste a suma y resta (1-100), multiplicacion y division del (1-16)"<<endl;
      while(correcto){
        num1=rand()%101;
        num2=rand()%101;
        SRMD=rand()%4;
        ///////////////////////////////SUMA////////////////////////////////////////
        if(SRMD==0){
            cout<<"Cuanto es "<<num1<<" + "<<num2<<": ";
            cin>>respuesta;
            if(respuesta == num1+num2){
                cout<<"Correcto!"<<endl;
                puntuacion++;
                cout<<"Tienes "<<puntuacion<<" puntos!"<<endl;
            } else {
                cout<<"La contestacion fue incorrecta la respuesta es: "<<num1+num2<<endl;
                correcto=false;
                cout<<"Terminaste con "<<puntuacion<<" puntos!"<<endl;
            }
        }
        ///////////////////////////////RESTA/////////////////////////////////////////
        if(SRMD==1){
            cout<<"Cuanto es "<<num1<<" - "<<num2<<": ";
            cin>>respuesta;
            if(respuesta == num1-num2){
                cout<<"Correcto!"<<endl;
                puntuacion++;
                cout<<"Tienes "<<puntuacion<<" puntos!"<<endl;
            } else {
                cout<<"La contestacion fue incorrecta la respuesta es: "<<num1-num2<<endl;
                correcto=false;
                cout<<"Terminaste con "<<puntuacion<<" puntos!"<<endl;
            }
        }
        /////////////////////////////MULTIPLICACION/////////////////////////////////
            if(SRMD==2){
            num1=rand()%16;
            num2=rand()%16;    
            cout<<"Cuanto es "<<num1<<" * "<<num2<<": ";
            cin>>respuesta;
            if(respuesta == num1*num2){
                cout<<"Correcto!"<<endl;
                puntuacion++;
                cout<<"Tienes "<<puntuacion<<" puntos!"<<endl;
            } else {
                cout<<"La contestacion fue incorrecta la respuesta es: "<<num1*num2<<endl;
                correcto=false;
                cout<<"Terminaste con "<<puntuacion<<" puntos!"<<endl;
            }
        }
        ////////////////////////////DIVISION///////////////////////////////////////
            if(SRMD==3){
               num1=rand()%16;
               num2=rand()%16;
        ////PARA NO DIVIDIR POR CERO /////////////////////////////////////////////    
            while (num2 == 0) {
               num2=rand()%16;
            }
           
            cout<<"Cuanto es "<<num1<<" / "<<num2<<": ";
            cin>>respuesta;
           
            double redondeado = round(num1 / num2);///redondea el resultado////////
           
            if(respuesta == redondeado){
                cout<<"Correcto!"<<endl;
                puntuacion++;
                cout<<"Tienes "<<puntuacion<<" puntos!"<<endl;
            } else {
                cout<<"La contestacion fue incorrecta la respuesta es: "<<round(num1/num2)<<endl;
                correcto=false;
                cout<<"Terminaste con "<<puntuacion<<" puntos!"<<endl;
            }
        }
      }
     
    break;

    default:
    break;
  }
 dificultades[numjuego]=dificultad;
 puntuaciones[numjuego]=puntuacion;
 numjuego++;
 cout<<"Quieres volver a jugar? "; 
 cin>>jugardenuevo;
 if(jugardenuevo=="si"){
     cout<<"\nEmpezando juego "<<numjuego+1<<endl;
     repite=true;
 } else{
     cout<<"\nJugaste "<<numjuego<<" juego(s)"<<endl;
     volverajugar=false;
     cout<<"Las puntuaciones son las siguientes: "<<endl;
     for(int i=0;i<numjuego;i++){
         cout<<"En el juego "<<i+1<<" sacaste "<<puntuaciones[i]<<" punto(s) en la dificultad "<<dificultades[i]<<endl;
     }
 }
}
  return 0;
}