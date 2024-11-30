#ifndef EEPROMETHEUS_H
#define EEPROMETHEUS_H

class EEPROMetheus
{
    public:
    static EEPROMetheus* GetInstance();

    // Delete copy constructor and assignment operator
    EEPROMetheus(const EEPROMetheus&) = delete;
    void operator=(const EEPROMetheus&) = delete;


    private:

};

#endif