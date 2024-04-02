


template <typename E>
class DoublyList;

template <typename E>
class DoublyNode
{
    public:
    E value;                //wartsoc elementu
    DoublyNode<E>* next;    //wskaznik na nastepny wezel/element
    DoublyNode<E>* prev;    //wskaznik na poprzedni wezel/element
    friend class DoublyList<E>;
};

template <typename E>
class DoublyList 
{
    public:
    int size;
    DoublyNode<E>* head;    //wskaznik na pierwszy element
    DoublyNode<E>* tail;    //wskaznik na ostatni element

    public:
    DoublyList();          //konstruktor
    ~DoublyList();         //destruktor
    bool empty() const;             //true jezeli pusta
    int ile() const;                //zwraca ilosc elementow
    const E& front() const;         //zwraca pierwszy element
    const E& end() const;           //zwraca ostatni element
    void whatSize()const;                //wypisuje size i capacity
    bool closerT(int where) const;            //jezeli element jest blizej tail return 1
    void add(DoublyNode<E>* nowy, const E& val);    //ustawia wskazniki przy dodawaniu
    void remove(DoublyNode<E>* goner);              //ustawia wskazniki przy usuwaniu
    void addFront(const E& val);                    //dodaj na poczatek
    void addEnd(const E& val);                      //dodaj na koniec
    void addMid(const E& val, int where);           //dodaj do srodka, iteracja od 0
    void removeFront();             //usun z poczatku
    void removeEnd();               //usun z konca
    void removeMid(int where);      //usun z wybranego miejsca
    void wypisz() const;            //wypisz wszystkie elementy
    void lookV(int co) const;              //wyszukiwanie po wartosci, obustronne
    
};

