#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include"Final-Project.hpp"
#include <queue>
#include<set>
using Level = std::vector< std::string >;
  
    struct queueNode
    {
       Block up ;
       Block down ;
       Block right ;
       Block left ;
       char cell ;
    };

 
  char breadthFirst(Level level ,  Location Start , Location Target , Location loc , Block block ) 
   {   std::set<Location>visit ;
     std:: queue<queueNode> q ;
      Start = getStartLocation(  level ,loc ) ;
      Target = getTargetLocation( level , loc) ;
      queueNode start = {Start , 'S'} ;
      queueNode target = {Target , 'T'} ;
     q.push(start) ;
  
  while (! q.empty())
  {   
      for (int i=0 ; i< level.size() ; i++)
      {
          queueNode current = start ;
       current = q.front() ;
       q.pop(); 
      if ((!visit.find)&& isValidElement(level ,loc ))
      {
          visit.insert ;
         current.up = moveUp(block );
         current.down = moveDown(block );
         current.right = moveRight(block );
         current.left = moveLeft(block );
         if (current = target)
         {
             return current ;
         }
         
      }
      }
  }
}
