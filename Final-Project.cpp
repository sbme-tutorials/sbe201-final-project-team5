
#include "Final-Project.hpp" 
#include <string>
#include <iostream> 
#include <algorithm> 
#include <vector>
#include <fstream>

int main ()
{  //print our maza
  const std::string filePath ;
  Level z = levelParser( "level1.txt") ;
   std::ifstream f( "level1.txt" );
   std::vector<std::string> filepath;
   for (std::vector<std::string>::const_iterator i = z.begin(); i != z.end(); ++i)
    std::cout << *i << ' '<<std::endl;
    
   
   
 
}  


