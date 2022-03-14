#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

int main(){
    int horas=0, minutos=0, segundos=0, boton, n, plato;

    cout<<"Bienvenidos a la cefeteria XYZ\n";
    cout<<"\nOprime el boton (0) para entrar a la cefeteria: ";
    cin>>boton;

    if(boton==0){
        cout<<"\nPuerta abierta";
        srand(time(NULL));
        n = 1+rand()%((10-1)-1);
        cout<<"\nSu numero de mesa es "<<n;
        cout<<"\n\nNuestro Menu";
        cout<<"\n1. Plato del Dia";
        cout<<"\n2. Recomendacion del Chef";
        cout<<"\n3. Pizza Italiana";
        cout<<"\nQue desea ordenar: ";
        cin>>plato;

        switch(plato){
            case 1: cout<<"\n\nDebes esperar 3 minutos para la entrega de su orden\n";
                    while(true){
                        cout<<"\r"<<horas<<":"<<minutos<<":"<<segundos;
                        Sleep(10);
                        segundos++;
                        if(segundos==60){
                            minutos++;
                            segundos=0;
                        }
                        if(minutos==60){
                            horas++;
                            minutos=0;
                            segundos=0;
                        }
                        if(minutos==3){
                            cout<<"\nSu pedido ha sido entregado";
                            break;
                        }
                    }
                    break;
            
            case 2: cout<<"\n\nDebes esperar 5 minutos para la entrega de su orden\n";
                    while(true){
                        cout<<"\r"<<horas<<":"<<minutos<<":"<<segundos;
                        Sleep(10);
                        segundos++;
                        if(segundos==60){
                            minutos++;
                            segundos=0;
                        }
                        if(minutos==60){
                            horas++;
                            minutos=0;
                            segundos=0;
                        }
                        if(minutos==5){
                            cout<<"\nSu pedido ha sido entregado";
                            break;
                        }
                    }
                    break;
            
            case 3: cout<<"\n\nDebes esperar 2 minutos para la entrega de su orden\n";
                    while(true){
                        cout<<"\r"<<horas<<":"<<minutos<<":"<<segundos;
                        Sleep(10);
                        segundos++;
                        if(segundos==60){
                            minutos++;
                            segundos=0;
                        }
                        if(minutos==60){
                            horas++;
                            minutos=0;
                            segundos=0;
                        }
                        if(minutos==2){
                            cout<<"\nSu pedido ha sido entregado";
                            break;
                        }
                    }
                    break;
            
            default: cout<<"\nEsta opcion no esta dentro de nuestro menu";
            break;
        }
    }
    if(boton>=1){
        switch(boton){
            default: cout<<"\nEstamos cerrados, vuelva pronto";
            break;
        }
    }
    return 0;
}