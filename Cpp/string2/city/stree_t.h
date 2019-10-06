#ifndef STREE_T_H
#define STREE_T_H

#include "building_t.h"
#include <vector>
#include <string>

using namespace std;

template <class Sid, class Bid>
class Street_t
{
    public:
        Street_t();
        ~Street_t();

        Street_t(const Street_t& street);
        Street_t<Sid, Bid>& operator=(const Street_t& street);

        const Sid& getStreetID() const;
        void setStreetID(const Sid& newID);

        void addBuilding2Street(const Buiding_t<Bid>& b);
        const Buiding_t<Bid>& getBuilding(Bid id) const;

    private:
        Sid id;
        vector<Buiding_t<Bid> >v ;
};

template <class Sid, class Bid>
Street_t<Sid, Bid>::~Street_t() {}

template <class Sid, class Bid>
Street_t<Sid, Bid>::Street_t() {}

template <class Sid, class Bid>
Street_t<Sid, Bid>::Street_t(const Street_t<Sid, Bid>& s) {id = s.id; v = s.v;}

template <class Sid, class Bid>
Street_t<Sid, Bid>& Street_t<Sid, Bid>::operator=(const Street_t<Sid, Bid>& s)
{
    id = s.id;
    v = s.v;
    return *this;
}


template <class Sid, class Bid>
void Street_t<Sid, Bid>::setStreetID(const Sid& newID)
{
    id = newID;
}

template <class Sid, class Bid>
void Street_t<Sid, Bid>::addBuilding2Street(const Buiding_t<Bid>& b)
{
    v.push_back(b);
}

template <class Sid, class Bid>
const Sid& Street_t<Sid, Bid>::getStreetID() const
{
    return id;
}

template <class Sid, class Bid>
const Buiding_t<Bid>& Street_t<Sid, Bid>::getBuilding(const Bid id) const
{
    int i;
     for(i=0; i<v.size();i++)
     {
         if(v[i].getId()==id)
         {
             return v[i];
         }
     }
     throw i;
 }
#endif
