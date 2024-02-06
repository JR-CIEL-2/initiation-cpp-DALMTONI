#ifndef DEF_RADIO
#define DEF_RADIO

#include <iostream>
#include <string>

class AutoRadio {
    private :
    int m_volume;
    bool m_etat;
    
    public:
    AutoRadio();
    AutoRadio (int volume, bool etat);
    AutoRadio(const AutoRadio &autre);
    ~AutoRadio();

    void setVolume(int puissance);
    void getVolume();
    void setEtat(bool etat);
    void getEtat();

    
};

#endif
//garage