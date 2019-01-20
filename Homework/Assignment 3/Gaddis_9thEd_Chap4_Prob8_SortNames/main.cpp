/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: dylanyazdani
 *
 * Created on January 15, 2019, 10:40 PM
 */

#include <iostream>
#include <string>
#include <set>
#include <algorithm>

void print(const std::string& item)
{
    std::cout << item << std::endl;
}

int main()
{
    std::set<std::string> sortedItems;

    

    {
        std::string name1, name2, name3;
        std::cout <<"Sorting Names\n";
        std::cout <<"Input 3 names\n";
        std::cin >> name1;
        std::cin >> name2;
        std::cin >> name3;

        sortedItems.insert(name1);
        sortedItems.insert(name2);
        sortedItems.insert(name3);
    }

    std::for_each(sortedItems.begin(), sortedItems.end(), &print);
    return 0;
}