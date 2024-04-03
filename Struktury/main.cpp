#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <sstream>
#include <random>
#include "dynamic_class.hpp"
#include "dynamic_fun.cpp"
#include "head_class.hpp"
#include "tail_class.hpp"
#include "doubly_class.hpp"



template <typename E>
int menu(E &e1)
{
int opcja;
do {
    std::cout << "1. Dodawanie" << std::endl << "2. Usuwanie"<< std::endl << "3. Wyszukiwanie po wartosci" << std::endl << "4. Rozmiar i ilosc elementow"
    << std::endl << "5. Wypisz" << std::endl << "6. Dodaj z pliku"<<std::endl<<"7. Wyjdz do menu glownego" << std::endl;
    std::cin >> opcja;

    switch(opcja) 
    {
        //dodawanie na wybrane pozycje
        case 1:
        {
        std::cout << "Dodawanie" << std::endl << "1. Poczatek" << std::endl << "2. Koniec"<< std::endl << "3. Wybor miejsca" << std::endl;
        int dod; std::cin >> dod;
        std::cout << "Ile elementow chcesz dodac: " << std::endl;
        int ile=0;  std::cin>>ile;
 
        if(dod==1){for (ile; ile>0; ile--){int value=std::rand(); e1.addFront(value);}}
        else if(dod==2){for (ile; ile>0; ile--){int value=std::rand(); e1.addEnd(value);}}
        else if(dod==3){int index; std::cout << "Gdzie: " << std::endl; std::cin >> index;
            for (ile; ile>0; ile--){int value=std::rand(); e1.addMid(value, index);}}
        else {std::cout << "error" << std::endl;}
        std::cout << "Sukces" << std::endl<< std::endl;
        break;
        }

        //usuwanie z wybranej pozycji
        case 2: 
        {
        std::cout << "Usuwanie" << std::endl << "1. Z poczatku" << std::endl << "2. z konca"<< std::endl << "3. Wybor miejsca" << std::endl;              
        int us; std::cin >> us;                           
        std::cout << "Ile elementow chcesz usunac: " << std::endl;                    
        int ile=0; std::cin>>ile;                    
        if(us==1){for (ile; ile>0; ile--) {e1.removeFront();}}                        
        else if(us==2) {for (ile; ile>0; ile--) {e1.removeEnd();}}                        
        else if(us==3) {std::cout << "Skad: "; int p; std::cin >>p;   for(ile; ile>0; ile--){e1.removeMid(p);}}                        
        else {std::cout << "error" << std::endl;}                        
        std::cout << "Sukces" << std::endl<< std::endl;                        
        break;                                            
        }

        //wyszukiwanie po wartosci, wypisuje ilosc elementow ewentualnie capacity, zgrywanie z pliku
        case 3: {e1.lookV(std::rand()); std::cout << "Sukces" << std::endl<< std::endl; break;}
        case 4: {e1.whatSize(); break;}
        case 5: {e1.wypisz(); break;}
        case 6: {
            do{e1.removeFront();}while(!e1.empty());//jezeli nie jest pusta usuwa wszystkie elementy
            
            readCSVFile("random_numbers.csv", e1); //zgrywanie z pliku linia po lini addEndem
            break;
            
        }

        //wyjscie oraz default
        case 7: {break;}
        default: {std::cout << "Nieprawidlowy wybor." << std::endl; break;}
    }

} while (opcja != 7);


return 0;       
}
        
template <typename E>
void readCSVFile(const std::string& filename, E &e1) {
    std::ifstream file(filename);
    std::string line;
    while (std::getline(file, line)) {
        std::istringstream ss(line);
        std::string token;
        while (std::getline(ss, token, ',')) 
        {
            e1.addEnd(std::stoi(token));
        }
    }
    file.close();
}


int main()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int wybor;
    do {
    std::cout << "MENU" << std::endl << "1. Tablica dynamiczna" << std::endl << "2. Lista jednokierunkowa - head"<<
    std::endl<<"3. Lista jednokierunkowa - head, tail" << std::endl <<"4. Lista dwukierunkowa" <<std::endl<<"5. Wygeneruj losowa strukture"<<std::endl<<"6. Wyjdz" << std::endl;
    std::cin >> wybor;
    switch(wybor)
    {
        case 1: {Dynamic<int> e1;menu(e1); break;}
        case 2: {SLinkedList<int> e1; menu(e1); break;}
        case 3: {TLinkedList<int> e1; menu(e1); break;}
        case 4: {DoublyList<int> e1; menu(e1); break;}

        //tworzymy strukture o wybranej wielksoci dodaj elementy na koniec
        case 5: {
            
            int which=std::rand()%4+1;
            std::cout << "Jakiej wielkosci ma byc struktura? " << std::endl; int ile=0;  std::cin>>ile;
            if(which==1) {Dynamic<int> e1;std::cout << "Wygenerowano tablice dynamiczna" << std::endl;
            for (ile; ile>0; ile--){int value=std::rand(); e1.addEnd(value);} std::cout << "Sukces" << std::endl<< std::endl; menu(e1);break;}

            else if(which==2){SLinkedList<int> e1;std::cout << "Wygenerowano lista jednokierunkowa - head"<< std::endl;
            for (ile; ile>0; ile--){int value=std::rand(); e1.addEnd(value);} std::cout << "Sukces" << std::endl<< std::endl; menu(e1);break;}

            else if(which==3){TLinkedList<int> e1;std::cout << "Wygenerowano lista jednokierunkowa - head, tail" << std::endl;
            for (ile; ile>0; ile--){int value=std::rand(); e1.addEnd(value);} std::cout << "Sukces" << std::endl<< std::endl; menu(e1);break;}

            else if(which==4){DoublyList<int> e1;std::cout << "Wygenerowano lista dwukierunkowa" << std::endl;
            for (ile; ile>0; ile--){int value=std::rand(); e1.addEnd(value);} std::cout << "Sukces" << std::endl<< std::endl; menu(e1); break;}

            else{break;}
        break;
        }

        case 6: {return 0;}
        default: {std::cout << "Nieprawidlowy wybor." << std::endl;break;}
    }
    }while(wybor!=6);
    
   


    return 0;
}



