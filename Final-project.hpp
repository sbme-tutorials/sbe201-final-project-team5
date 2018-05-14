#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include"Final-Project.hpp"
#include <queue>
using Level = std::vector< std::string >;
  
  
  struct Elements
  { 
     Level level ;
     Location loc ;
    char Validelement =  getLevelElement(  level ,  loc ) ;
     Elements*left ;
     Elements*right ;
  };
  Elements*create()
  {
     return nullptr;
  }
  
  void breadthFirst(Elements*element) 
   {
     std:: queue<Elements*> queue ;
   Elements *current = element ;
   
  if(current == nullptr) return ;
   queue.push(current) ;
  
  while (! queue.empty())
  {   current = queue.front() ;
      queue.pop();
     std::cout<< current -> Validelement << std::endl; 
      
     if(current -> left != nullptr)
    {   
    
      queue.push(current -> left) ;
     
    }
     if(current -> right != nullptr)
    {   
     
      queue.push(current -> right) ;
     
    }
    
  }
}
