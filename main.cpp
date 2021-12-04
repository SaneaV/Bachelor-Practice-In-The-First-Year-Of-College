#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include <ctime>
#include "BAC.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    time_t seconds = time(NULL);
    tm* timeinfo = localtime(&seconds);

    HELLO();
    bool Main = false;

    while (!Main)
    {
        system("cls");
        bool SmallMain = false;
        cout<<"||=================================================||"<<endl<<"||";
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Yellow));
        cout<<setw(33)<<"Äîáðî ïîæàëîâàòü!";
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
        cout<<setw(18)<<"||"<<endl;
        cout<<"||"<<setw(51)<<"||"<<endl;

        cout<<"||=================================================||"<<endl;
        cout<<"||=================================================||"<<endl;
        cout<<"||1. Èíôîðìàöèÿ î ó÷åíèêàõ."<<setw(26)<<"||"<<endl;
        cout<<"||=================================================||"<<endl;
        cout<<"||2. Äîáàâèòü ó÷åíèêà â ñïèñêè."<<setw(22)<<"||"<<endl;
        cout<<"||=================================================||"<<endl;
        cout<<"||3. Óäàëèòü ó÷åíèêà èç ñïèñêîâ."<<setw(21)<<"||"<<endl;
        cout<<"||=================================================||"<<endl;
        cout<<"||4. Ñîðòèðîâêà ó÷åíèêîâ."<<setw(28)<<"||"<<endl;
        cout<<"||=================================================||"<<endl;
        cout<<"||5. Èñïðàâëåíèå îöåíîê çà ÁÀÊ."<<setw(22)<<"||"<<endl;
        cout<<"||=================================================||"<<endl;
        cout<<"||6. Ó÷åíèêè èç îäíîãî øêîëüíîãî ó÷åðåæäåíèÿ."<<setw(8)<<"||"<<endl;
        cout<<"||=================================================||"<<endl;
        cout<<"||7. Ó÷åíèêè ñ îòðèöàòåëüíûì áàëëîì."<<setw(17)<<"||"<<endl;
        cout<<"||=================================================||"<<endl;
        cout<<"||8. Ñðåäíèé áàëë ïî ó÷åáíîìó ó÷åðåæäåíèþ."<<setw(11)<<"||"<<endl;
        cout<<"||=================================================||"<<endl;
        cout<<"||9. Ó÷åíèêè, ïîäàâøèå íà àïïåëÿöèþ."<<setw(17)<<"||"<<endl;
        cout<<"||=================================================||"<<endl<<"||";
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
        cout<<"0. Âûõîä èç ïðîãðàììû.";
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
        cout<<setw(29)<<"||"<<endl<<"||=================================================||"<<endl;
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
        cout<<"||Íàä ïðîãðàììîé ðàáîòàë: ";
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
        cout<<"Âè÷åâ Àëåêñàíäð";
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
        cout<<setw(12)<<"||"<<endl;
        cout<<"||=================================================||"<<endl;
        cout<<"   Äàòà è âðåìÿ îòêðûòèÿ: "<<asctime(timeinfo);


        if (_kbhit)
        {
            switch(getch())
            {
            case '1':
            {
                while (!SmallMain)
                {
                    system("cls");
                    cout<<"||=================================================||"<<endl<<"||";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Yellow));
                    cout<<setw(35)<<"Èíôîðìàöèÿ î ó÷åíèêàõ.";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cout<<setw(16)<<"||"<<endl<<"||=================================================||"<<endl<<"||";
                    cout<<"1. Ïîñìîòðåòü îáùèé ñïèñîê."<<setw(24)<<"||"<<endl;
                    cout<<"||=================================================||"<<endl<<"||";
                    cout<<"2. Ïîñìîòðåòü ñïèñîê ïîäàâøèõ íà àïïåëÿöèþ."<<setw(8)<<"||"<<endl;
                    cout<<"||=================================================||"<<endl<<"||";
                    cout<<"3. Âåðíóòüñÿ â ìåíþ."<<setw(31)<<"||"<<endl;
                    cout<<"||=================================================||"<<endl;

                    if(_kbhit)
                    {
                        switch (getch())
                        {
                        case '1':
                        {
                            system("cls");
                            READTXT1();
                            ShowInfoStudent();
                            system("PAUSE");
                            system("cls");
                            SmallMain = true;
                            break;
                        }
                        case '2':
                        {
                            system("cls");
                            READTXT2();
                            ShowInfoAppeal();
                            system("PAUSE");
                            system("cls");
                            SmallMain = true;
                            break;
                        }
                        case '3':
                        {
                            system("cls");
                            SmallMain = true;
                            break;
                        }
                        default:
                        {
                            system("cls");
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                            cout<<"||=================================================||"<<endl<<"||";
                            cout<<setw(40)<<"ÂÛÁÅÐÈÒÅ ÑÓÙÅÑÒÂÓÞÙÈÉ ÂÀÐÈÀÍÒ!"<<setw(11)<<"||"<<endl;
                            cout<<"||=================================================||"<<endl;
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                            Sleep(500);
                        }
                        }

                    }
                }
                break;
            }
            case '2':
            {
                while (!SmallMain)
                {
                    system("cls");
                    cout<<"||====================================================||"<<endl<<"||";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Yellow));
                    cout<<setw(30)<<"Äîáàâèòü ó÷åíèêà.";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cout<<setw(24)<<"||"<<endl<<"||====================================================||"<<endl<<"||";
                    cout<<"1. Äîáàâèòü ó÷åíèêà â îáùèé ñïèñîê."<<setw(19)<<"||"<<endl;
                    cout<<"||====================================================||"<<endl<<"||";
                    cout<<"2. Äîáàâèòü ó÷åíèêà â ñïèñîê ïîäàâøèõ íà àïïåëÿöèþ."<<" ||"<<endl;
                    cout<<"||====================================================||"<<endl<<"||";
                    cout<<"3. Âåðíóòüñÿ â ìåíþ."<<setw(34)<<"||"<<endl;
                    cout<<"||====================================================||"<<endl;

                    if (_kbhit)
                    {
                        switch (getch())
                        {
                        case '1':
                        {
                            system("cls");
                            READTXT1();
                            AddStudent();
                            cout<<"||====================================================||"<<endl<<"||";
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                            cout<<setw(35)<<"Ñòóäåíò äîáàâëåí!";
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                            cout<<setw(19)<<"||"<<endl<<"||====================================================||"<<endl<<endl;
                            system("PAUSE");
                            system("cls");
                            SmallMain = true;
                            break;
                        }
                        case '2':
                        {
                            system("cls");
                            READTXT2();
                            AddAppel();
                            cout<<"||====================================================||"<<endl<<"||";
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                            cout<<setw(35)<<"Ñòóäåíò äîáàâëåí!";
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                            cout<<setw(19)<<"||"<<endl<<"||====================================================||"<<endl<<endl;
                            system("PAUSE");
                            system("cls");
                            SmallMain = true;
                            break;
                        }
                        case '3':
                        {
                            system("cls");
                            SmallMain = true;
                            break;
                        }
                        default:
                        {
                            system("cls");
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                            cout<<"||=================================================||"<<endl<<"||";
                            cout<<setw(40)<<"ÂÛÁÅÐÈÒÅ ÑÓÙÅÑÒÂÓÞÙÈÉ ÂÀÐÈÀÍÒ!"<<setw(11)<<"||"<<endl;
                            cout<<"||=================================================||"<<endl;
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                            Sleep(500);
                        }
                        }
                    }
                }
                break;
            }


            case '3':
            {
                while (!SmallMain)
                {
                    system("cls");
                    cout<<"||====================================================||"<<endl<<"||";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Yellow));
                    cout<<setw(34)<<"Óäàëèòü ó÷åíèêà.";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cout<<setw(20)<<"||"<<endl<<"||====================================================||"<<endl<<"||";
                    cout<<"1. Óäàëèòü ó÷åíèêà èç îáùåãî ñïèñêà."<<setw(18)<<"||"<<endl;
                    cout<<"||====================================================||"<<endl<<"||";
                    cout<<"2. Óäàëèòü ó÷åíèêà èç ñïèñêà ïîäàâøèõ íà àïïåëÿöèþ."<<" ||"<<endl;
                    cout<<"||====================================================||"<<endl<<"||";
                    cout<<"3. Âåðíóòüñÿ â ìåíþ."<<setw(34)<<"||"<<endl;
                    cout<<"||====================================================||"<<endl;

                    if (_kbhit)
                    {
                        switch (getch())
                        {
                        case '1':
                        {
                            system("cls");
                            READTXT1();
                            READTXT2();
                            DelStudent();
                            system("PAUSE");
                            system("cls");
                            SmallMain = true;
                            break;
                        }
                        case '2':
                        {
                            system("cls");
                            READTXT2();
                            DelAppel();
                            system("PAUSE");
                            system("cls");
                            SmallMain = true;
                            break;
                        }
                        case '3':
                        {
                            system("cls");
                            SmallMain = true;
                            break;
                        }
                        default:
                        {
                            system("cls");
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                            cout<<"||=================================================||"<<endl<<"||";
                            cout<<setw(40)<<"ÂÛÁÅÐÈÒÅ ÑÓÙÅÑÒÂÓÞÙÈÉ ÂÀÐÈÀÍÒ!"<<setw(11)<<"||"<<endl;
                            cout<<"||=================================================||"<<endl;
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                            Sleep(500);
                        }
                        }
                    }
                }
                break;
            }

            case '4':
            {
                while (!SmallMain)
                {
                    system("cls");
                    cout<<"||====================================================||"<<endl<<"||";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Yellow));
                    cout<<setw(35)<<"Ñîðòèðîâêà ó÷åíèêîâ.";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cout<<setw(19)<<"||"<<endl<<"||====================================================||"<<endl<<"||";
                    cout<<"1. Ñîðòèðîâàòü ãóìàíèòàðèåâ."<<setw(26)<<"||"<<endl;
                    cout<<"||====================================================||"<<endl<<"||";
                    cout<<"2. Ñîðòèðîâàòü ðåàëüíèêîâ."<<setw(28)<<"||"<<endl;
                    cout<<"||====================================================||"<<endl<<"||";
                    cout<<"3. Âåðíóòüñÿ â ìåíþ."<<setw(34)<<"||"<<endl;
                    cout<<"||====================================================||";

                    if (_kbhit)
                    {
                        switch (getch())
                        {
                        case '1':
                        {
                            system("cls");
                            READTXT1();
                            SortStudent();
                            OutputG();
                            system("PAUSE");
                            system("cls");
                            SmallMain = true;
                            break;
                        }
                        case '2':
                        {
                            system("cls");
                            READTXT1();
                            SortStudent();
                            OutputR();
                            system("PAUSE");
                            system("cls");
                            SmallMain = true;
                            break;
                        }
                        case '3':
                        {
                            system("cls");
                            SmallMain = true;
                            break;
                        }
                        default:
                        {
                            system("cls");
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                            cout<<"||=================================================||"<<endl<<"||";
                            cout<<setw(40)<<"ÂÛÁÅÐÈÒÅ ÑÓÙÅÑÒÂÓÞÙÈÉ ÂÀÐÈÀÍÒ!"<<setw(11)<<"||"<<endl;
                            cout<<"||=================================================||"<<endl;
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                            Sleep(500);
                        }
                        }
                    }
                }
                break;
            }

            case '5':
            {

                while (!SmallMain)
                {
                    READTXT1();
                    READTXT2();
                    CorrectionNotes();

                    system("cls");
                    cout<<"||====================================================||"<<endl<<"||";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                    cout<<setw(43)<<"Èñïðàâëåíèå îöåíîê ïðîøëî óäà÷íî!";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cout<<setw(11)<<"||"<<endl<<"||====================================================||"<<endl<<"||";
                    cout<<"1. Ïîêàçàòü íîâûé ñïèñîê."<<setw(29)<<"||"<<endl;
                    cout<<"||====================================================||"<<endl<<"||";
                    cout<<"2. Âåðíóòüñÿ â ìåíþ."<<setw(34)<<"||"<<endl;
                    cout<<"||====================================================||";

                    if (_kbhit)
                    {
                        switch (getch())
                        {
                        case '1':
                        {
                            system("cls");
                            ShowInfoStudent();
                            system("PAUSE");
                            system("cls");
                            SmallMain = true;
                            break;
                        }
                        case '2':
                        {
                            system("cls");
                            SmallMain = true;
                            break;
                        }
                        default:
                        {
                            system("cls");
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                            cout<<"||=================================================||"<<endl<<"||";
                            cout<<setw(40)<<"ÂÛÁÅÐÈÒÅ ÑÓÙÅÑÒÂÓÞÙÈÉ ÂÀÐÈÀÍÒ!"<<setw(11)<<"||"<<endl;
                            cout<<"||=================================================||"<<endl;
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                            Sleep(500);
                        }
                        }
                    }
                }
                break;
            }

            case '6':
            {

                while (!SmallMain)
                {
                    system("cls");
                    cout<<"||====================================================||"<<endl<<"||";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Yellow));
                    cout<<setw(47)<<"Ó÷åíèêè èç îäíîãî ó÷åáíîãî ó÷åðåæäåíèÿ!";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cout<<setw(7)<<"||"<<endl<<"||====================================================||"<<endl<<"||";
                    cout<<"1. Çàïèñàòü äàííûå â ôàéë."<<setw(28)<<"||"<<endl;
                    cout<<"||====================================================||"<<endl<<"||";
                    cout<<"2. Ïîêàçàòü äàííûå â ôàéëå."<<setw(27)<<"||"<<endl;
                    cout<<"||====================================================||"<<endl<<"||";
                    cout<<"3. Âåðíóòüñÿ â ìåíþ."<<setw(34)<<"||"<<endl;
                    cout<<"||====================================================||";

                    if (_kbhit)
                    {
                        switch (getch())
                        {
                        case '1':
                        {
                            system("cls");
                            READTXT1();
                            SchoolFile();
                            system("PAUSE");
                            SmallMain = true;
                            system("cls");
                            break;
                        }
                        case '2':
                        {
                            system("cls");
                            READTXT3();
                            ShowInfoSchool();
                            system("PAUSE");
                            system("cls");
                            SmallMain = true;
                            break;
                        }
                        case '3':
                        {
                            system("cls");
                            SmallMain = true;
                            break;
                        }
                        default:
                        {
                            system("cls");
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                            cout<<"||=================================================||"<<endl<<"||";
                            cout<<setw(40)<<"ÂÛÁÅÐÈÒÅ ÑÓÙÅÑÒÂÓÞÙÈÉ ÂÀÐÈÀÍÒ!"<<setw(11)<<"||"<<endl;
                            cout<<"||=================================================||"<<endl;
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                            Sleep(500);
                        }
                        }
                    }
                }
                break;
            }

            case '7':
            {

                while (!SmallMain)
                {
                    system("cls");
                    cout<<"||====================================================||"<<endl<<"||";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Yellow));
                    cout<<setw(40)<<"Ó÷åíèêè ñ îòðèöàòåëüíûì áàëëîì.";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cout<<setw(14)<<"||"<<endl<<"||====================================================||"<<endl<<"||";
                    cout<<"1. Èç îáùåãî ñïèñêà."<<setw(34)<<"||"<<endl;
                    cout<<"||====================================================||"<<endl<<"||";
                    cout<<"2. Èç ñïèñêà ïîäàâøèõ íà àïïåëÿöèþ."<<setw(19)<<"||"<<endl;
                    cout<<"||====================================================||"<<endl<<"||";
                    cout<<"3. Âåðíóòüñÿ â ìåíþ."<<setw(34)<<"||"<<endl;
                    cout<<"||====================================================||";

                    if (_kbhit)
                    {
                        switch (getch())
                        {
                        case '1':
                        {
                            system("cls");
                            READTXT1();
                            BadNote1();
                            system("PAUSE");
                            SmallMain = true;
                            system("cls");
                            break;
                        }
                        case '2':
                        {
                            system("cls");
                            READTXT2();
                            BadNote2();
                            system("PAUSE");
                            system("cls");
                            SmallMain = true;
                            break;
                        }
                        case '3':
                        {
                            system("cls");
                            SmallMain = true;
                            break;
                        }
                        default:
                        {
                            system("cls");
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                            cout<<"||=================================================||"<<endl<<"||";
                            cout<<setw(40)<<"ÂÛÁÅÐÈÒÅ ÑÓÙÅÑÒÂÓÞÙÈÉ ÂÀÐÈÀÍÒ!"<<setw(11)<<"||"<<endl;
                            cout<<"||=================================================||"<<endl;
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                            Sleep(500);
                        }
                        }
                    }
                }
                break;
            }



            case '8':
            {
                system("cls");
                READTXT1();
                MediumNote1();
                system("PAUSE");
                SmallMain = true;
                system("cls");
                break;
            }

            case '9':
            {
                system("cls");
                READTXT1();
                READTXT2();
                StupAppeal();
                system("PAUSE");
                break;
            }

            case '0':
            {
                while (!SmallMain)
                {
                    system("cls");
                    cout<<"||=================================================||"<<endl<<"||";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | Yellow));
                    cout<<setw(46)<<"Âû óâåðåíû, ÷òî õîòèòå âûéòè èç ïðîãðàììû?";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cout<<setw(5)<<"||"<<endl<<"||"<<setw(51)<<"||"<<endl;
                    cout<<"||=================================================||"<<endl<<"||";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                    cout<<"\t1. Íåò.";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                    cout<<"\t\t\t\t2. Äà.";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cout<<setw(7)<<"||"<<endl<<"||=================================================||"<<endl;
                    if (_kbhit)
                    {
                        switch (getch())
                        {
                        case '1':
                        {
                            SmallMain = true;
                            break;
                        }
                        case '2':
                        {
                            SmallMain = true;
                            Main=true;
                            system("cls");
                            break;
                        }
                        default:
                        {
                            system("cls");
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                            cout<<"||=================================================||"<<endl<<"||";
                            cout<<setw(40)<<"ÂÛÁÅÐÈÒÅ ÑÓÙÅÑÒÂÓÞÙÈÉ ÂÀÐÈÀÍÒ!"<<setw(11)<<"||"<<endl;
                            cout<<"||=================================================||"<<endl;
                            SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                            Sleep(500);
                        }
                        }
                    }
                }
                break;

            }

            default:
            {
                system("cls");
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                cout<<"||=================================================||"<<endl<<"||";
                cout<<setw(40)<<"ÂÛÁÅÐÈÒÅ ÑÓÙÅÑÒÂÓÞÙÈÉ ÂÀÐÈÀÍÒ!"<<setw(11)<<"||"<<endl;
                cout<<"||=================================================||"<<endl;
                SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                Sleep(500);
                break;
            }
            }
        }
    }
    NICEWORK();
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
    cout<<"||=================================================||"<<endl<<"||";
    cout<<setw(45)<<"Ïðîãðàììà óñïåøíî çàêîí÷èëà âûïîëíåíèå."<<setw(6)<<"||"<<endl;
    cout<<"||=================================================||"<<endl;
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

    return 0;
}
