#ifndef CITY_T_H
#define CITY_T_H
#include "building_t.h"
#include "street_t.h"

using namespace std;

template <class Cid, class Sid, class Bid>
class City_t
{
    public:
        City_t();
        ~City_t();
        City_t(const City_t& c);
        City_t& operator=(const City_t& c);

        const Cid& getCityID() const;
        void setCityID(const Cid& newID);
        void addStreet2City(const Street_t<Sid, Bid>& s);
        const Street_t<Sid, Bid>& getStreet(Sid id) const;

    private:
        Cid id;
        vector<Street_t<Sid, Bid> > streets;
};

template <class Cid, class Sid, class Bid>
City_t<Cid, Sid, Bid>::~City_t() {}

template <class Cid, class Sid, class Bid>
City_t<Cid, Sid, Bid>::City_t(const City_t& c) {id = c.id; streets = c.streets;}

template <class Cid, class Sid, class Bid>
City_t<Cid, Sid, Bid>::City_t() {}

template <class Cid, class Sid, class Bid>
City_t<Cid, Sid, Bid>& City_t<Cid, Sid, Bid>::operator=(const City_t& c)
{
    id = c.id;
    streets = c.streets;
    return *this;
}

template <class Cid, class Sid, class Bid>
const Cid& City_t<Cid, Sid, BID>::getCityID() const {return id;}

template <class Cid, class Sid, class Bid>
void City_t<Cid, Sid, Bid>::setCityID(const Cid& newID) {id = newID;}

template <class Cid, class Sid, class Bid>
void City_t<Cid, Sid, Bid>::addStreet2City(const Street_t<Sid, Bid>& s)
{
     streets.push_pack(s);
}

template <class Cid, class Sid, class Bid>
const Street_t<Sid, Bid>& City_t<Cid, Sid, Bid>::getStreet(Sid id) const
{
    for(int i = 0; i < streets.size(); ++i)
    {
        if(streets.get == id)
        {
            return streets[i];
        }
    }
    throw string("There is no such street");
}
#endif // CITY_T_H
