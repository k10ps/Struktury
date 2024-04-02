


template <typename E>
class SLinkedList;

//tworzymy wezel zawierajacy informacje o wartosci i wskaznik na nasteony element
template <typename E>
class SingleNode 
{
    public:
    E value;                //wartsoc elementu
    SingleNode<E>* next;    //wskaznik na nastepny wezel/element
    friend class SLinkedList<E>;
};

//glowna klasa
template <typename E>
class SLinkedList 
{
    public:
    int size;
    SingleNode<E>* head; //wskaznik na 1 element

    public:
    SLinkedList();          //konstruktor
    ~SLinkedList();         //destruktor
    bool empty() const;             //true jezeli pusta
    int ile() const;                //zwraca ilosc elementow
    const E& front() const;         //zwraca 1 elemenet
    void whatSize()const;                //wypisuje size i capacity
    void addFront(const E& val);                    //dodaj na poczatek
    void addEnd(const E& val);                      //dodaj na koniec
    void addMid(const E& val, int where);           //dodaj do srodka
    void removeFront();             //usun z poczatku
    void removeEnd();               //usun z konca
    void removeMid(int where);      //usun z wybranego miejsca
    void wypisz() const;            //wypisz wszystkie elementy
    void lookV(int co) const;              //wyszukiwanie po wartosci
    
};
