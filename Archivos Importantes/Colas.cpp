#include <iostream>
#include <string>
#include "frame.h"
#include "cola.h"
#include <conio.h>
#include <Windows.h>
#define getch() _getch()
using namespace std;
void gotoXY(int x, int y) {
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
    
}
int main()
{
    /*
    cola<int>* cola1 = new cola<int>();
    string rpt;
    do{
        cout << "Digite el numero: ";
        int x; cin >> x;
        cin.ignore();
        cola1->insertar(new frame<int>(x));
        cout << "Desea agregar un nuevo elemento: ";
        getline(cin, rpt);
        fflush(stdin);
        Sleep(1000);
    } while (rpt.compare("si") == 0);
    cout <<"El tamano de la cola es: " << cola1->getsize() << endl;
    frame<int>* aux = cola1->getItem();
    while (aux != NULL) {
        cout << *aux->getItem() << endl;
        aux = aux->getNext();
        Sleep(1000);
    }
    */
    
    int x = 0;
    int y = 0;
    string serpiente = "x";
    while (true) {
        bool respuesta = false;
        int menu = _getch();
        if (x == 50 and y == 50) serpiente += "x";
        switch (menu) {
        
        case 97:
            if (0 <= x - 1) {
                x = x - 1;
            }
            break;
        case 115:
            y = y + 1;
            break;
        case 100:
            if (x <= 299) {
                x = x + 1;
            }
            break;
        case 119: 
            if(0<=y) y = y - 1;
            break;
        case 32:
            respuesta = true;
            break;

        }
        if (respuesta == true) break;
        system("cls");
        
        if (y != 0) {
            gotoXY(0, 0);
            cout << "X: " << x << " Y: " << y;
            gotoXY(x , y);
        }
        gotoXY(x, y);
        cout << serpiente;
        
    }
        

    }
    
 


