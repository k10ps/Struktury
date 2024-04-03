


template <typename E>
class Dynamic
{
    public:
    int size;       //liczba ele w tab
    E capacity;   //liczba miejsc
    E *array;     //wskaznik na tablice dynamiczna
    
    public:
    Dynamic();
    ~Dynamic();
    bool notenough()const;     //jezeli nie ma jzu miejsca zwraca 1
    void wypisz()const;                  //wypisuje wszystkei wartosci
    bool ifempty()const;                 //jezeli size==0 zwraca 1
    void whatSize()const;                //wypisuje size i capacity
    void addEnd(int val);                   //dodajemy elementy na koniec, od 0 wiec na index=size
    void addFront(int val);                 //dodajemy elementy na początek
    void addMid(int val, int index);        //dodajemy elementy do wybranego punktu
    void relocate(int index);               //przesuwa elementy w prawo
    void resize(int opcja, int val, int index);        //zwiekszamy rozmiar tablicy capacity*2
    void remove(int index);               //usuwa element i przesuwa
    void removeMid(int index);              
    void removeFront();
    void removeEnd();
    void lookV(int val)const;          //wyszukiwanie wartosci
    void lookP(int index)const;       //na danej pozycji wartosc, od 0!!
};

