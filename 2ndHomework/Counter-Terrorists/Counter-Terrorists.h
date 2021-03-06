#pragma once
#include "../Creator/Creators.h"
#include <iostream>
#include <vector>
#include <string>

class CounterTerrorists {
public:
    CounterTerrorists() = default;
    ~CounterTerrorists() = default;
    virtual void AddCTerrorist(std::string type);
    virtual void Info();
    virtual int GetDamage();

    std::vector <Unit*> allUnits;
    CounterCreator creator;
};