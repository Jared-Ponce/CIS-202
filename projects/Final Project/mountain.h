#ifndef MOUNTAIN_H
#include <string>

class Mountain
{
private:
    std::string m_name;
    std::string m_country;
    int m_elevation;

public:
    Mountain();
    Mountain(std::string name, std::string country, int elevation);

    std::string getName() const { return m_name; }
    std::string getCountry() const { return m_country; }
    int getElevation() const { return m_elevation; }

    void setName(std::string name) { m_name = name; }
    void setCountry(std::string country) { m_country = country; }
    void setElevation(int elevation) { m_elevation = elevation; }

    double toMeters();
    void print();
};
#endif