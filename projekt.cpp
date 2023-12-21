#include <iostream>
#include <math.h>
#include <fstream>
#include <ctime>
using namespace std;
int dzial, operacja;
float a, b, wynik, wynik2;
    void dodawanie ()
    {
        system("cls");
        cout << "Wpisz pierwsza liczbe: ";
        cin >> a;
        cout << endl;
        cout << "Wpisz druga liczbe: ";
        cin >> b;
        cout << endl;
        wynik = a + b;
        cout << "Wynik dzialania to: " << wynik << endl;
    } 
    void odejmowanie ()
    {
        system("cls");
        cout << "Wpisz pierwsza liczbe: ";
        cin >> a;
        cout << endl;
        cout << "Wpisz druga liczbe: ";
        cin >> b;
        cout << endl;
        wynik = a - b;
        cout << "Wynik dzialania to: " << wynik << endl;
    } 
     void mnozenie ()
    {
        system("cls");
        cout << "Wpisz pierwsza liczbe: ";
        cin >> a;
        cout << endl;
        cout << "Wpisz druga liczbe: ";
        cin >> b;
        cout << endl;
        wynik = a * b;
        cout << "Wynik dzialania to: " << wynik << endl;
    } 
    void dzielenie ()
    {
    system("cls");
        for(;;)
        {
            cout << "Wpisz pierwsza liczbe: ";
            cin >> a;
            cout << endl;
            cout << "Wpisz druga liczbe: ";
            cin >> b;
            cout << endl;
            if(b == 0)
            {
            cout << "Nie mozna dzielic przez 0!" << endl;
            }
            else
            {
                wynik = a / b;
                cout << "Wynik dzialania to: " << wynik << endl;
                break;
            }
        }    
    } 
    void srednia ()
    {
        system("cls");
        cout << "Wpisz pierwsza liczbe: ";
        cin >> a;
        cout << endl;
        cout << "Wpisz druga liczbe: ";
        cin >> b;
        cout << endl;
        wynik = (a + b) / 2;
        cout << "Srednia arytmetyczna twoich liczb wynosi: " << wynik << endl;
    }
    void kwadrat ()
    {
    system("cls");
        for(;;)
        {
        
            cout << "Podaj dlugosc boku kwadratu: ";
            cin >> a;
            cout << endl;
            if(a <= 0)
            {
                cout << "Jednostki nie moga byc mniejsze lub rowne 0!" << endl;
            }
            else
            {
                wynik = a * a;
                cout << "Pole tego kwadratu wynosi: " << wynik;
                break;
            }
        }   
    } 
    void trojkat ()
    {
    system("cls");
        for(;;)
        {
            cout << "Podaj dlugosc podstawy trojkata: ";
            cin >> a;
            cout << endl;
            cout << "Podaj wysokosc trojkata";
            cin >> b;
            cout << endl;
            if(a <= 0 || b <= 0)
            {
                cout << "Jednostki nie moga byc mniejsze lub rowne 0!" << endl;
            }
            else
            {
                wynik = a * b / 2;
                cout << "Pole tego trojkata wynosi: " << wynik;
                break;
            }    
        }     
    }
    void kolo ()
    {
    system("cls");
        for(;;)
        {    
            cout << "Podaj dlugosc promienia kola: ";
            cin >> a;
            cout << endl;
            if(a <= 0)
            {
                cout << "Jednostki nie moga byc mniejsze lub rowne 0!" << endl;
            }
            else
            {
                wynik = a * a * M_PI;
                wynik2 = a * a;
                cout << "Pole tego kola wynosi: " << wynik2 << "PI";
                cout << endl;
                cout << "W przyblizeniu jest to: " << wynik << endl;
                break;
            }
        }    
    }
    void kostka()
    {
    system("cls");
        for(;;)
        {
            cout << "Podaj dlugosc krawedzi szescianu: ";
            cin >> a;
            cout << endl;
            if(a <= 0)
            {
            cout << "Jednostki nie moga byc mniejsze lub rowne 0!" << endl;
            }
            else
            {
                wynik = a * a * a;
                cout << "Objetosc tego szescianu wynosi: " << wynik;
                break;
            }
        }    
    }  
    void walec()
    {
    system("cls");
        for(;;)
        {
            cout << "Podaj dlugosc promienia podstawy: ";
            cin >> a;
            cout << endl;
            cout << "Podaj wysokosc walca: ";
            cin >> b;
            cout << endl;
            if(a <= 0 || b <= 0)
            {
                cout << "Jednostki nie moga byc mniejsze lub rowne 0!" << endl;
            }
            else
            {
                wynik = a * a * M_PI * b; 
                wynik2 = a * a * b;
                cout << "Objetosc tego walca wynosi: " << wynik2 << "PI";
                cout << endl;
                cout << "W przyblizeniu jest to: " << wynik << endl;
                break;
            }
        }    
    }
int main()
{
    for(;;)
    {
        cout << "Wybierz dzial matematyki:";
        cout << endl;
        cout <<  "1.Arytmetyka";
        cout << endl; 
        cout <<  "2.Geometria";
        cout << endl; 
        cin >> dzial;
            
        if(dzial == 1)
        {
            for(;;)  
            {  
                system("cls");
                cout << "Wybierz operacje z dzialu Arytmetyka (wpisz cyfre): ";
                cout << endl; 
                cout <<  "1.Dodawanie";
                cout << endl; 
                cout <<  "2.Odejmowanie"; 
                cout << endl;
                cout <<  "3.Mnozenie";
                cout << endl; 
                cout <<  "4.Dzielenie";
                cout << endl; 
                cout <<  "5.Srednia Arytmetyczna";
                cout << endl;
                cin >> operacja;
                switch(operacja)
                {
                    case 1:
                        dodawanie();
                        break;

                    case 2:
                        odejmowanie();
                        break;

                    case 3:
                        mnozenie();
                        break;

                    case 4:
                        dzielenie();
                        break;

                    case 5:
                        srednia();
                        break;
                        
                    default:
                    cout << "Wybierz operacje od 1 do 5";
                    cout << endl;
                    continue;
                }
                break;
            }    
        break;
        }
        else if(dzial == 2)
        { 
            for(;;)
            {
                system("cls");
                cout << "Wybierz operacje z dzialu Geometria (wpisz cyfre):"; 
                cout << endl;
                cout <<  "1.Pole Kwadratu";
                cout << endl; 
                cout <<  "2.Pole Trojkata";
                cout << endl; 
                cout <<  "3.Pole Kola";
                cout << endl; 
                cout <<  "4.Objetosc Szescianu";
                cout << endl; 
                cout <<  "5.Objetosc Walca";
                cout << endl;
                cin >> operacja;
                    switch(operacja)
                {
                    case 1:
                        kwadrat();
                        break;

                    case 2:
                        trojkat();
                        break;

                    case 3:
                        kolo();
                        break;

                    case 4:
                        kostka();
                        break;

                    case 5:
                        walec();
                        break;
                        
                    default:
                    cout << "Wybierz operacje od 1 do 5";
                    cout << endl;
                    continue;
                } 
                break;
                
            }
            break;
        }
        else
        {
            cout << "Wybierz cyfre 1 lub 2";
            cout << endl;
        }
    }
    time_t t=time(0);
    tm* data = localtime(&t);
    ofstream plik; 
    plik.open("dane.txt", ios::app);
    plik << data->tm_mday << "." << data->tm_mon + 1 <<"." << data->tm_year + 1900 << "    godz.:" << data->tm_hour << ":" << data->tm_min << "    wynik: " << wynik << "   dzial: " << dzial << "   operacja: " << operacja << "\n================================================\n"; 
    plik.close();
}
    
