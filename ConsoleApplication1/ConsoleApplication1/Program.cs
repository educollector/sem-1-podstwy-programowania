using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {


                        //Wypisuje liczbe przypisana do Litery
            /*char c = 'A';
            int a = (int)c;
            Console.WriteLine(a);*/
            //char c = (char)253;
            //Console.WriteLine(c);
            /*char a = 'a';
            char b = 'A';
            int c = (int)a;
            int d = (int)b;
            Console.WriteLine(a-b);*/
            //Console.WriteLine('a' - 'A');
            //Console.WriteLine("\\");
            //Console.WriteLine("\t");
            //powrot karetki przeniesieni kursora na poczatek i nadpisuje
            //Console.WriteLine("aaa" + '\r' + "d");
            //Console.WriteLine((int)'\n');
            //zczytac 2 liczby i wypisac czy pierwsza jest wieksza czy druga
            /*int a = Convert.ToInt32(Console.ReadLine());
            int b = Convert.ToInt32(Console.ReadLine());
            
             * if (a >= b)
                Console.WriteLine("pierwsza jest wieksza lub rowna");
            else
                Console.WriteLine("druga jest wieksza");*/
            //zczytac liczbe i sprawdzic czy jest wieksza nie szerokosc okienka
            /*int  a = Convert.ToInt32(Console.ReadLine());
            if (a > Console.WindowWidth)
                Console.WriteLine("true");
            else
                Console.WriteLine("false");*/

            //wybiera najwieksza z 3 i najmnijesza
            /*int a = Convert.ToInt32(Console.ReadLine());
            int b = Convert.ToInt32(Console.ReadLine());
            int c = Convert.ToInt32(Console.ReadLine());
            if (a > b)
            {
                if (a > c)
                {

                    Console.WriteLine("a najwieksze");
                    if (b > c)
                        Console.WriteLine("c najmnijesze");
                    else
                        Console.WriteLine("b najmnijesze");
                }

                else
                {
                    Console.WriteLine("c najwieksze");
                    if (a > b)

                        Console.WriteLine("b najmnijesze");
                    else
                        Console.WriteLine("a najmnijesze");

                }
            }
            else
            {
                if (c > b)
                {
                    Console.WriteLine("c najwieksze");
                    if (a > b)
                        Console.WriteLine("b najmnijesze");
                    else
                        Console.WriteLine("a najmnijesze");
                }
                else
                    Console.WriteLine("b najwieksze");
                if (c > a)
                    Console.WriteLine("a najmnijesze");
                else
                    Console.WriteLine("c najmniejsze");*/


            //zczytuje 2 liczby i znak jesli znak rowne A to wypisuje wieksza jesli inny to mnijesza
             //int a = Convert.ToInt32(Console.ReadLine());
             //int b = Convert.ToInt32(Console.ReadLine()); 
             //char c = Convert.ToChar(Console.ReadLine());
             //char znak = 'd';
     
             
            //zczytac 2 napisy  jesli iloczyn ich dlugosci rowna sie szerokosci okienka
            /* string a = Console.ReadLine();
             string b = Console.ReadLine();
             if (a.Length * b.Length == Console.WindowWidth)
             {
                 Console.WriteLine("tak");

             }
             else
                 Console.WriteLine("nie");*/
           /* int a = Convert.ToInt32(Console.ReadLine());
            int b = 0;
            if (a > 8)
            {
                Console.WriteLine(b+3);
                


            }
                else if (a>4)
            {
                    Console.WriteLine(b+2);

            }
            else if ( a>2)
            {
                Console.WriteLine(b+1);
            }
            else
                Console.WriteLine(b);*/

           /* int a = Convert.ToInt32(Console.ReadLine());
            if ( a % 2 == 0 )
            Console.WriteLine("parzysta");
            else
            Console.WriteLine("nieparzysta");*/
            
            /*int a = Convert.ToInt32(Console.ReadLine());
            int b = Convert.ToInt32(Console.ReadLine());
            if (a % b == 0)
                Console.WriteLine("podzielna");
            else
                Console.WriteLine("niepodzielna");*/
            /*if (Console.ForegroundColor == ConsoleColor.Blue)
                Console.ForegroundColor = ConsoleColor.Red;*/
            /*Console.WriteLine("wybierz:");
            Console.WriteLine("1.Jebać gadomskiego");
            Console.WriteLine("2.Jebać Gadomskiego Kurwe");
            Console.WriteLine("3.Jebac Gadomskiego Kurwe policjanta");
            int a = Convert.ToInt32(Console.ReadLine());
            if (a == 1)
                Console.WriteLine("Doskonały wybor");
            else if (a == 2)
                Console.WriteLine("Nie pomyliłeś się");
            else if (a == 3)
                Console.WriteLine("Widać ze znasz ta kurwe");*/
            /*Console.WriteLine("Wybierz liczbe od 1 do 10");
            int a = Convert.ToInt32(Console.ReadLine());
            if (a >= 1 && a <= 8)
                Console.WriteLine("a");
            else if (a == 9)
                Console.WriteLine("b");
            else
                Console.WriteLine("c");*/
           
            
            /*char i = 'd';
            switch (i)
            {
                case 'a':
                    Console.WriteLine("1");
                    break;
                case 'b':
                    Console.WriteLine("2");
                    break;                    
                default:
                    Console.WriteLine("3");
                    break;
            }*/

            /*int a = Convert.ToInt32(Console.ReadLine());
            int b = Convert.ToInt32(Console.ReadLine());
            int c = Convert.ToInt32(Console.ReadLine());
            double delta, x1, x2;
            delta = Math.Pow(b, 2) - 4 * a * c;
            x1 = (-b + Math.Sqrt(delta)) / (a / 2);
            x2 = (-b - Math.Sqrt(delta)) / (a / 2);
            if (delta > 0)
                Console.WriteLine("sa 2 miejsca zerowe : " + x1 + "i" + x2);
            else if (delta == 0)
                Console.WriteLine("jest jedno miejsce zerowe: " + x1);
            else
                Console.WriteLine("nie ma miejsc zerowych");*/

            //wypisz ile to jest 'a' w liczbie||szosty bit od prawj=1 to duza
            //char a = 'A';
            //int liczba=(int)(char a = 'A');
            //Console.WriteLine((int)('A'));
            //Console.WriteLine((int)('a') - (int)('A'));
           // Console.WriteLine((int)('9'));

            //zczytc 2 liczby i wypisz czy pierwsz aczy druga sa większe
                //int a = Convert.ToInt32(Console.ReadLine());
                //int b = Convert.ToInt32(Console.ReadLine());

                //if(a>b)
                //{
                //    Console.WriteLine("pierwsza");
                //}
                //else if (a<b)
                //{
                //    Console.WriteLine("druga");
                //}
                //else
                //{
                //    Console.WriteLine("rowne");
                //}
            //zadanie:
                    //if ((Convert.ToInt32(Console.ReadLine())>(Convert.ToInt32(Console.ReadLine()))))
                    //{
                    //    Console.WriteLine("większa pierwsza");
                    //}
                    //else
                    //    Console.WriteLine("większa druga");


                    //Console.ReadLine();
                        //int x = 8;
                        //int wejscia = 0;
                        //if(x>2)
                        //{
                        //    wejscia++;
                        //}
                        //if (x > 4)
                        //{
                        //    wejscia++;
                        //}
                        //if (x > 6)
                        //{
                        //    wejscia++;
                        //}

                        //Console.WriteLine("liczba wykonanych petli if: " + wejscia);

                ////czy liczba jest parzysta czy nie
                //        int liczba = 15;
                //        if (liczba % 2 == 0)
                //            Console.WriteLine("parzysta");
                //        else
                //            Console.WriteLine("nieparzysta");

           
            //zad czy pierwsza podzielna rpzez drugą w jednej linii
                //if (((Convert.ToInt32(Console.ReadLine())%(Convert.ToInt32(Console.ReadLine()))==0 )))
                //    Console.WriteLine("podzielna");
                //else
                //    Console.WriteLine("niepodzielna");
            
            //zad zaczytac znak i dwie liczby, jesli znakiem jest "A" to niech wypisze wiekszą z nich
                //int a=(Convert.ToInt32(Console.ReadLine()));
                //int b=(Convert.ToInt32(Console.ReadLine()));
                //char znak = (Convert.ToChar(Console.ReadLine()));
                
                //if(znak=='A')
                //{
                //    if (a > b)
                //        Console.WriteLine(a);
                //    else
                //        Console.WriteLine(b);
                //}
                //else
                //{
                //    if (a < b)
                //        Console.WriteLine(a);
                //    else
                //        Console.WriteLine(b);
                //}
            
            //zad zaczytaj dwa n apisy, jesli iloczyn ich długosci jest równy szerokości okienka wyswietl TAK jesli nei to NIE
                    //string napis1 = Console.ReadLine();
                    //string napis2 = Console.ReadLine();

                    //if (napis1.Length*napis2.Length == Console.WindowWidth)
                    //{
                    //    Console.WriteLine("TAK");
                    //}
                    //else
                    //    Console.WriteLine("NIE");

            //zad czy kolor czcionki to BLUE jesli tak to zamienia na RED
            
            //Csprawdz kolor czcionki i go zmien

                //if (Console.ForegroundColor == ConsoleColor.Gray)
                //    Console.ForegroundColor = ConsoleColor.Red;
                //Console.WriteLine("vshd");
            //zad podaj trzy liczby i wypisz z nich największa i najmniejszą
                //int a = (Convert.ToInt32(Console.ReadLine()));
                //int b = (Convert.ToInt32(Console.ReadLine()));
                //int c = (Convert.ToInt32(Console.ReadLine()));

                //if ((a >= b && a >= c))
                //    Console.WriteLine("max: " + a);
                //else if (b >= a && b >= c)
                //    Console.WriteLine("max: " + b);
                //else
                //    Console.WriteLine("max: "+c);

                //if (a <= b && a <= c)
                //    Console.WriteLine("min: " + a);
                //else if (b <= a && b <= c)
                //    Console.WriteLine("min: " + b);
                //else
                //    Console.WriteLine("min: " + c);

            //zad pierwiastki rownania kwadratowego

                //double a = (Convert.ToDouble(Console.ReadLine()));
                //double b = (Convert.ToDouble(Console.ReadLine()));
                //double c = (Convert.ToDouble(Console.ReadLine()));
                //double delta = b * b - 4 * a * c;

                //if (a <= 0)
                //            Console.WriteLine("rownanie jest linowe");
                //else
                //{
                //    if (delta < 0)
                //        Console.WriteLine("nie ma pierwiastkow w zb l rzecz");
                //    else if (delta == 0)
                //    {
                //        double pierwiastek = (-b / 2 * a);
                //        Console.WriteLine("jeden pierwiastek : " + pierwiastek);
                //    }
                //    else
                //    {
                //        double pierwiastek1 = (-b - Math.Sqrt(delta) / 2*a);
                //        double pierwiastek2 = (-b + Math.Sqrt(delta) / 2 * a);
                //        Console.WriteLine("pierwiastek nr 1 : " + pierwiastek1);
                //        Console.WriteLine("\npierwiastek nr 2 : " + pierwiastek2);
                //    }
                //}

//-----------------ZAJĘCIA ŚRODA


//ZAD 7. sprawdz czy podany znak jest literą

            //char znak = Convert.ToChar(Console.ReadLine());

            //if (znak >= 'a' && znak <= 'z' || (znak >= 'A' && znak <= 'Z'))
            //{
            //    Console.WriteLine(znak + " jest litera\n");
            //    if(znak >= 'a' && znak <= 'z' )                   
            //        Console.WriteLine(znak + " jest litera MALA\n");
            //    else
            //        Console.WriteLine(znak + " jest litera WIELKA\n");
            //}
            //else
            //{
            //    Console.WriteLine(znak + " nie jest litera\n");
            //}


 //ZAD 8. Sparwdz czy podany znak jest cyfra
            //char znak = Convert.ToChar(Console.ReadLine());
            //if (znak >= '0' && znak <= '9')
            //{
            //        Console.WriteLine(znak + " jest liczba\n");
            //}
            //else
            //{
            //    Console.WriteLine(znak + " nie jest liczba\n");
            //}


//ZAD 2. Podac nazwisko , program wypisuje nazwisko jesli sklada się ono z conajmniej 3 znaków
//i pierwsza litera jest duża
            //string nazwisko = Console.ReadLine();
            //if ((nazwisko.Length >= 3))
            //{
            //    if((nazwisko.ElementAt(0)>='A') && (nazwisko.ElementAt(0)<='Z'))
            //        Console.WriteLine("nazwisko nie krotsze niz 3 znaki i zaczyna sie z wielkiej litery : " + nazwisko);
            //    else if ((nazwisko.ElementAt(0) >= 'a') && (nazwisko.ElementAt(0) <= 'z'))
            //    {
            //        string pierwszy = Convert.ToString(nazwisko.ElementAt(0));
            //        string temp = pierwszy.ToUpper();
            //        nazwisko = nazwisko.Remove(0, 1); //usuwa od zerowego do pierwszegoz znaku
            //        nazwisko = temp + nazwisko;
            //        Console.WriteLine("nazwisko poprawione: "+ nazwisko);
            //    }
            //} 
            //else
            //    Console.WriteLine("ERROR");

//ZAD 3. Wczyytać 3 liczby-długości boków (double) , program wypisuje TAK jeśli można z nich zbudowac trójkąt
            //Console.WriteLine("Podaj dlugosci trzech bokow a, b , c : ");
            //double a = Convert.ToDouble(Console.ReadLine());
            //double b = Convert.ToDouble(Console.ReadLine());
            //double c = Convert.ToDouble(Console.ReadLine());

            //if( a+b>c && c+b>a && c+a>b)
            //    Console.WriteLine("TAK, da sie zbudowac trojkat");
            //else
            //    Console.WriteLine("z bokow" + " " + a + " " + b + " " + c + " " + " nie da sie zbudowac trojkata");

//1. Z czytać znak i dwie liczby, jeśli znakiem jest "A", to niech wypisze większą z nich
//2. Z czytać dwa napisy, jeśli iloczyn ich długości jest równy szerokości okienka, to wypisać
//słowo "TAK", w przeciwnym wypadku słowo "NIE"
//3. Z czytać liczbe i wypisać do ilu if-ów z tych niżej weszła
//if(x > 2)
//if(x > 4)
//if(x > 6)
//4. Program, który wypisuje czy podana liczba jest parzysta
//5. Program, który wypisuje czy pierwsza podana liczba jest podzielna przez drugą 
//6. Program, który sprawdza czy kolor czcionki jest BLUE, jeśli tak to zmienia go na RED
//1. Podać 3 liczby i wypisać z nich największą i najmniejszą
//5. Miejsca zerowe funkcji kwadratowej :X
//--------------------------------------------------------------
//7. Sprawdzić czy podany znak jest literą, jeśli tak to czy duża czy mała
//8. Sprawdzić czy podany znak jest cyfrą
//2. Podać nazwisko, program wypisuje nazwisko jeśli składa się ono z co najmniej 3 znaków
//i pierwsza litera jest duża. Jeśli tylko pierwsza litera jest mała to zamienić ją na dużą
//i wypisać, komunikat że nazwisko poprawione. Jeśli liter jest za mało wypisać "Błąd"
//3. Wczytać 3 liczby (double), program wypisuje "TAK", jeśli można z nich zbudować trójkąt
//4. Program wczytuje 3 liczby i wypisuje czy podany trójkąt jest pitagorejski(proporcje 3:4:5)
//6. Z czytać 4 punkty na układzie wsp. Pierwszy pkt. jest lewym dolnym, drugi prawym górnym
//wierzchołkiem prostokąta. Kolejne dwa pkt. są lewym dolnym, prawym górnym, wierzchołkiem
//drugiego. Program wypisuje "TAK" albo "NIE" zależnie od tego czy prostokąty się na siebie 
//nachodzą
//9. Z czytać 3 liczby i wypisać jaki z nich można zrobić trójkąt (ostrokątny, prostokątny,
//rozwartokątny albo że się nie da)
//10. Z czytać dane jako linie i wypisać ile mają pkt. wspólnych (0,1 czy nieskończenie wiele)

//ZAD 4. Program wczytuje 3 liczyby i podaje czy jest pitagorejski (proporcje 3:4:5)
            Console.WriteLine("Podaj dlugosci trzech bokow a, b , c : ");
            double a = Convert.ToDouble(Console.ReadLine());
            double b = Convert.ToDouble(Console.ReadLine());
            double c = Convert.ToDouble(Console.ReadLine());
            double min = 0;

            Console.ReadLine();
            if (a + b > c && c + b > a && c + a > b && a != b && b != c)
            {
                Console.WriteLine("TAK, da sie zbudowac trojkat roznoboczny");
                double licznik = (a + b + c) / (3 + 4 + 5);
                if(

            }
            else
                Console.WriteLine("z bokow" + " " + a + " " + b + " " + c + " " + " nie da sie zbudowac trojkata wcale albo trojkata roznobocznego");


            Console.ReadLine();

        }
    }
}
