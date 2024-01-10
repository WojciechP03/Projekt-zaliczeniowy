#include <iostream>
#include <math.h>
#include <fstream>
#include <ctime>
#include<limits>
using namespace std;
int section, operation;
float a, b, result, result2;
    void dodawanie ()
        {
            system("cls");

            cout << "Wpisz pierwsza liczbe: ";
		     if (!(cin >> a))
					{
					    cin.clear();
					    cin.ignore(numeric_limits<streamsize>::max(), '\n');

					    cout << "Dane nie sa liczba.";

					    return;
					}
            cout << endl;

            cout << "Wpisz druga liczbe: ";
                if (!(cin >> b))
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        cout << "Dane nie sa liczba.";

                        return;
                    }
            cout << endl;

            result = a + b;

            cout << "Wynik dzialania to: " << result;
            cout << endl;
        } 
    void odejmowanie ()
        {
            system("cls");

            cout << "Wpisz pierwsza liczbe: ";
             if (!(cin >> a))
					{
					    cin.clear();
					    cin.ignore(numeric_limits<streamsize>::max(), '\n');

					    cout << "Dane nie sa liczba.";

					    return;
					}
            cout << endl;

            cout << "Wpisz druga liczbe: ";
                if (!(cin >> b))
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        cout << "Dane nie sa liczba.";

                        return;
                    }
            cout << endl;

            result = a - b;

            cout << "Wynik dzialania to: " << result;
            cout << endl;
        } 
     void mnozenie ()
        {
            system("cls");

            cout << "Wpisz pierwsza liczbe: ";
             if (!(cin >> a))
					{
					    cin.clear();
					    cin.ignore(numeric_limits<streamsize>::max(), '\n');

					    cout << "Dane nie sa liczba.";

					    return;
					}
            cout << endl;

            cout << "Wpisz druga liczbe: ";
                if (!(cin >> b))
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        cout << "Dane nie sa liczba.";

                        return;
                    }
            cout << endl;

            result = a * b;

            cout << "Wynik dzialania to: " << result;
            cout << endl;
        } 
    void dzielenie ()
        {
            system("cls");
                    for(;;)
                    {
                        cout << "Wpisz pierwsza liczbe: ";
                         if (!(cin >> a))
					{
					    cin.clear();
					    cin.ignore(numeric_limits<streamsize>::max(), '\n');

					    cout << "Dane nie sa liczba.";
                        cout << endl;

					    return;
					}
                        cout << endl;

                        cout << "Wpisz druga liczbe: ";
                           if (!(cin >> b))
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');

                            cout << "Dane nie sa liczba.";
                            cout << endl;

                            return;
                        }
                        cout << endl;
                            
                            if(b == 0)
                            {
                            cout << "Nie mozna dzielic przez 0!" << endl;
                            }
                            else
                            {
                                result = a / b;

                                cout << "Wynik dzialania to: " << result;
                                cout << endl;

                                break;
                            }
                    }    
        } 
    void srednia ()
        {
            system("cls");

            cout << "Wpisz pierwsza liczbe: ";
             if (!(cin >> a))
					{
					    cin.clear();
					    cin.ignore(numeric_limits<streamsize>::max(), '\n');

					    cout << "Dane nie sa liczba.";
                        cout << endl;

					    return;
					}
            cout << endl;

            cout << "Wpisz druga liczbe: ";
                if (!(cin >> b))
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        cout << "Dane nie sa liczba.";
                        cout << endl;

                        return;
                    }
            cout << endl;

            result = (a + b) / 2;

            cout << "Srednia arytmetyczna twoich liczb wynosi: " << result;
            cout << endl;
        }
    void kwadrat ()
        {
            system("cls");
                for(;;)
                {
                
                    cout << "Podaj dlugosc boku kwadratu: ";
                     if (!(cin >> a))
					{
					    cin.clear();
					    cin.ignore(numeric_limits<streamsize>::max(), '\n');

					    cout << "Dane nie sa liczba.";
                        cout << endl;

					    return;
					}
                    cout << endl;

                        if(a <= 0)
                        {
                            cout << "Jednostki nie moga byc mniejsze lub rowne 0!";
                            cout << endl;
                        }
                        else
                        {
                            result = a * a;

                            cout << "Pole tego kwadratu wynosi: " << result;
                            cout << endl;

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
                    if (!(cin >> a))
					{
					    cin.clear();
					    cin.ignore(numeric_limits<streamsize>::max(), '\n');

					    cout << "Dane nie sa liczba.";
                        cout << endl;

					    return;
					}
                    cout << endl;

                    cout << "Podaj wysokosc : ";
                        if (!(cin >> b))
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');

                            cout << "Dane nie sa liczba.";
                            cout << endl;

                            return;
                        }
                    cout << endl;

                    if(a <= 0 || b <= 0)
                    {
                        cout << "Jednostki nie moga byc mniejsze lub rowne 0!" << endl;
                    }
                    else
                    {
                        result = a * b / 2;

                        cout << "Pole tego trojkata wynosi: " << result;
                        cout << endl;

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
                     if (!(cin >> a))
					{
					    cin.clear();
					    cin.ignore(numeric_limits<streamsize>::max(), '\n');

					    cout << "Dane nie sa liczba.";
                        cout << endl;

					    return;
					}
                    cout << endl;

                        if(a <= 0)
                        {
                            cout << "Jednostki nie moga byc mniejsze lub rowne 0!" << endl;
                        }
                        else
                        {
                            result = a * a * M_PI;
                            result2 = a * a;

                            cout << "Pole tego kola wynosi: " << result2 << "PI";
                            cout << endl;
                            cout << "W przyblizeniu jest to: " << result;
                            cout << endl;

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
					 if (!(cin >> a))
					{
					    cin.clear();
					    cin.ignore(numeric_limits<streamsize>::max(), '\n');

					    cout << "Dane nie sa liczba.";
                        cout << endl;

					    return;
					}
                    cout << endl;

                        if(a <= 0)
                        {
                        cout << "Jednostki nie moga byc mniejsze lub rowne 0!" << endl;
                        }
                        else
                        {
                            result = a * a * a;

                            cout << "Objetosc tego szescianu wynosi: " << result;
                            cout << endl;

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
                    if (!(cin >> a))
                        {
                            cin.clear();
                            cin.ignore(numeric_limits<streamsize>::max(), '\n');

                            cout << "Dane nie sa liczba.";
                            cout << endl;

                            return;
                        }
                    cout << endl;

                    cout << "Podaj wysokosc walca: ";
                        if (!(cin >> b))
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        cout << "Dane nie sa liczba.";
                        cout << endl;

                        return;
                    }
                    cout << endl;

                        if(a <= 0 || b <= 0)
                        {
                            cout << "Jednostki nie moga byc mniejsze lub rowne 0!" << endl;
                        }
                        else
                        {
                            result = a * a * M_PI * b; 
                            result2 = a * a * b;

                            cout << "Objetosc tego walca wynosi: " << result2 << "PI";
                            cout << endl;

                            cout << "W przyblizeniu jest to: " << result;
                            cout << endl;

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

        cout << "Wybierz 9 jesli chcesz zamknac program";
        cout << endl;

        if (!(cin >> section))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Dane nie sa liczba.";
            cout << endl;

            continue;
        }
            
        if(section == 1)
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

                if (!(cin >> operation))
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "Dane nie sa liczba.";
                    cout << endl;

                    continue;
                }

                switch(operation)
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
        }
        else if(section == 2)
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

                 if (!(cin >> operation))
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cout << "Dane nie sa liczba.";
                    cout << endl;

                    continue;
                }

                    switch(operation)
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
        }
        else if(section == 9)
        {
            return 0;
        }
        else
        {
            cout << "Wybierz cyfre 1 lub 2";
            cout << endl;
        }
        time_t t=time(0);

        tm* date = localtime(&t);

        ofstream file; 
        file.open("dane.txt", ios::app);

        file << date->tm_mday << "." << date->tm_mon + 1 <<"." << date->tm_year + 1900 << "    godz.:" << date->tm_hour << ":" << date->tm_min << "    wynik: " << result << "   dzial: " << section << "   operacja: " << operation << "\n================================================\n"; 

        file.close();  
    }
   
}
    
