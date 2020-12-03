#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
   std::vector < char> char_vector (people.size(), 'n');
   int j = 0;
  for (std::list<Human>::iterator it = people.begin(); it != people.end(); std::advance(it, 1)) {
  it.birthday();
  
  if (it.isMonster()){
    char_vector[people.size()-j-1]='y';
      }
  j++;
}
    return char_vector;
}
