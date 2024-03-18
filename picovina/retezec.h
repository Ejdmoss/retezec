#ifndef PICOVINA_RETEZEC_H
#define PICOVINA_RETEZEC_H

class retezec {
private:
    char* data;
    int veliky;

public:
    retezec();
    retezec(const retezec &);
    retezec(const char *);
    ~retezec();
    char& operator[](int index);
    retezec& operator=(const retezec &);
    retezec& operator+=(const retezec &);
    retezec operator+(const retezec &p) const;
    unsigned int zjistiDelku();
    void setRetezec(const char *);
    void vypis();
};

#endif //PICOVINA_RETEZEC_H
