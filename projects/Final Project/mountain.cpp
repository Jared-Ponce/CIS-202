#include "mountain.h"
#include <iostream>
#include <iomanip>

Mountain::Mountain()
{
    m_name = "NoName";
    m_country = "NoCountry";
    m_elevation = 0;
}
Mountain::Mountain(std::string name, std::string country, int elevation)
{
    m_name = name;
    m_country = country;
    m_elevation = elevation;
}
double Mountain::toMeters() //Converts the elevation from feet to meters
{
    double temp = m_elevation;
    return (m_elevation / 3.2808);
}

void Mountain::print()  //Print all info on the Mountain
{
    std::cout <<std::left<< std::setw(35) << m_name
              << std::setw(25) << m_country
             << std::to_string(m_elevation) + "ft" << '('
              << std::setprecision(3) <<std::fixed << toMeters() << "m)"
              << std::endl;
    return;
}