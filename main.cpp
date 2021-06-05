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
        cout<<setw(33)<<"����� ����������!";
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
        cout<<setw(18)<<"||"<<endl;
        cout<<"||"<<setw(51)<<"||"<<endl;

        cout<<"||=================================================||"<<endl;
        cout<<"||=================================================||"<<endl;
        cout<<"||1. ���������� � ��������."<<setw(26)<<"||"<<endl;
        cout<<"||=================================================||"<<endl;
        cout<<"||2. �������� ������� � ������."<<setw(22)<<"||"<<endl;
        cout<<"||=================================================||"<<endl;
        cout<<"||3. ������� ������� �� �������."<<setw(21)<<"||"<<endl;
        cout<<"||=================================================||"<<endl;
        cout<<"||4. ���������� ��������."<<setw(28)<<"||"<<endl;
        cout<<"||=================================================||"<<endl;
        cout<<"||5. ����������� ������ �� ���."<<setw(22)<<"||"<<endl;
        cout<<"||=================================================||"<<endl;
        cout<<"||6. ������� �� ������ ��������� �����������."<<setw(8)<<"||"<<endl;
        cout<<"||=================================================||"<<endl;
        cout<<"||7. ������� � ������������� ������."<<setw(17)<<"||"<<endl;
        cout<<"||=================================================||"<<endl;
        cout<<"||8. ������� ���� �� �������� �����������."<<setw(11)<<"||"<<endl;
        cout<<"||=================================================||"<<endl;
        cout<<"||9. �������, �������� �� ���������."<<setw(17)<<"||"<<endl;
        cout<<"||=================================================||"<<endl<<"||";
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
        cout<<"0. ����� �� ���������.";
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
        cout<<setw(29)<<"||"<<endl<<"||=================================================||"<<endl;
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
        cout<<"||��� ���������� �������: ";
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
        cout<<"����� ���������";
        SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
        cout<<setw(12)<<"||"<<endl;
        cout<<"||=================================================||"<<endl;
        cout<<"   ���� � ����� ��������: "<<asctime(timeinfo);


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
                    cout<<setw(35)<<"���������� � ��������.";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cout<<setw(16)<<"||"<<endl<<"||=================================================||"<<endl<<"||";
                    cout<<"1. ���������� ����� ������."<<setw(24)<<"||"<<endl;
                    cout<<"||=================================================||"<<endl<<"||";
                    cout<<"2. ���������� ������ �������� �� ���������."<<setw(8)<<"||"<<endl;
                    cout<<"||=================================================||"<<endl<<"||";
                    cout<<"3. ��������� � ����."<<setw(31)<<"||"<<endl;
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
                            cout<<setw(40)<<"�������� ������������ �������!"<<setw(11)<<"||"<<endl;
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
                    cout<<setw(30)<<"�������� �������.";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cout<<setw(24)<<"||"<<endl<<"||====================================================||"<<endl<<"||";
                    cout<<"1. �������� ������� � ����� ������."<<setw(19)<<"||"<<endl;
                    cout<<"||====================================================||"<<endl<<"||";
                    cout<<"2. �������� ������� � ������ �������� �� ���������."<<" ||"<<endl;
                    cout<<"||====================================================||"<<endl<<"||";
                    cout<<"3. ��������� � ����."<<setw(34)<<"||"<<endl;
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
                            cout<<setw(35)<<"������� ��������!";
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
                            cout<<setw(35)<<"������� ��������!";
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
                            cout<<setw(40)<<"�������� ������������ �������!"<<setw(11)<<"||"<<endl;
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
                    cout<<setw(34)<<"������� �������.";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cout<<setw(20)<<"||"<<endl<<"||====================================================||"<<endl<<"||";
                    cout<<"1. ������� ������� �� ������ ������."<<setw(18)<<"||"<<endl;
                    cout<<"||====================================================||"<<endl<<"||";
                    cout<<"2. ������� ������� �� ������ �������� �� ���������."<<" ||"<<endl;
                    cout<<"||====================================================||"<<endl<<"||";
                    cout<<"3. ��������� � ����."<<setw(34)<<"||"<<endl;
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
                            cout<<setw(40)<<"�������� ������������ �������!"<<setw(11)<<"||"<<endl;
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
                    cout<<setw(35)<<"���������� ��������.";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cout<<setw(19)<<"||"<<endl<<"||====================================================||"<<endl<<"||";
                    cout<<"1. ����������� ������������."<<setw(26)<<"||"<<endl;
                    cout<<"||====================================================||"<<endl<<"||";
                    cout<<"2. ����������� ����������."<<setw(28)<<"||"<<endl;
                    cout<<"||====================================================||"<<endl<<"||";
                    cout<<"3. ��������� � ����."<<setw(34)<<"||"<<endl;
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
                            cout<<setw(40)<<"�������� ������������ �������!"<<setw(11)<<"||"<<endl;
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
                    cout<<setw(43)<<"����������� ������ ������ ������!";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cout<<setw(11)<<"||"<<endl<<"||====================================================||"<<endl<<"||";
                    cout<<"1. �������� ����� ������."<<setw(29)<<"||"<<endl;
                    cout<<"||====================================================||"<<endl<<"||";
                    cout<<"2. ��������� � ����."<<setw(34)<<"||"<<endl;
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
                            cout<<setw(40)<<"�������� ������������ �������!"<<setw(11)<<"||"<<endl;
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
                    cout<<setw(47)<<"������� �� ������ �������� �����������!";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cout<<setw(7)<<"||"<<endl<<"||====================================================||"<<endl<<"||";
                    cout<<"1. �������� ������ � ����."<<setw(28)<<"||"<<endl;
                    cout<<"||====================================================||"<<endl<<"||";
                    cout<<"2. �������� ������ � �����."<<setw(27)<<"||"<<endl;
                    cout<<"||====================================================||"<<endl<<"||";
                    cout<<"3. ��������� � ����."<<setw(34)<<"||"<<endl;
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
                            cout<<setw(40)<<"�������� ������������ �������!"<<setw(11)<<"||"<<endl;
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
                    cout<<setw(40)<<"������� � ������������� ������.";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cout<<setw(14)<<"||"<<endl<<"||====================================================||"<<endl<<"||";
                    cout<<"1. �� ������ ������."<<setw(34)<<"||"<<endl;
                    cout<<"||====================================================||"<<endl<<"||";
                    cout<<"2. �� ������ �������� �� ���������."<<setw(19)<<"||"<<endl;
                    cout<<"||====================================================||"<<endl<<"||";
                    cout<<"3. ��������� � ����."<<setw(34)<<"||"<<endl;
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
                            cout<<setw(40)<<"�������� ������������ �������!"<<setw(11)<<"||"<<endl;
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
                    cout<<setw(46)<<"�� �������, ��� ������ ����� �� ���������?";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));
                    cout<<setw(5)<<"||"<<endl<<"||"<<setw(51)<<"||"<<endl;
                    cout<<"||=================================================||"<<endl<<"||";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightRed));
                    cout<<"\t1. ���.";
                    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | LightGreen));
                    cout<<"\t\t\t\t2. ��.";
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
                            cout<<setw(40)<<"�������� ������������ �������!"<<setw(11)<<"||"<<endl;
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
                cout<<setw(40)<<"�������� ������������ �������!"<<setw(11)<<"||"<<endl;
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
    cout<<setw(45)<<"��������� ������� ��������� ����������."<<setw(6)<<"||"<<endl;
    cout<<"||=================================================||"<<endl;
    SetConsoleTextAttribute(hConsole, (WORD) ((Black << 4) | White));

    return 0;
}
