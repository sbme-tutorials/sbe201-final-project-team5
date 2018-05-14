
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
    // 
    Level level ;
    Location Start = getStartLocation(  level ) ;
    Location Target = getTargetLocation( level ) ;
    //put valid element in bfs!
  struct Elements
  { 
     Level level ;
     Location loc ;
    char Valid-element =  getLevelElement(  level ,  loc ) ;
     Element*left ;
     Element*right ;
  }
   Elements* create()
{
    return nullptr;
}
  void breadthFirst(Elements*element) 
   {
     std:: queue<Elements*> queue ;
   Elements *current = element ;
   
  if(current == nullptr) return ;
   queue.push(current) ;
  
  while (! queue.empty()&& ! isEmpty(current))
  {   current = queue.front() ;
      queue.pop();
     std::cout<< current -> Valid-element << std::endl; 
      
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
//put moves in set 
  struct moves
  {
    Level level ;
    Block block ;
    Block up = moveUp(block ) ;
    Block down =moveDown(block )
    Block right = moveRight(block ) ;
    Block left =  moveLeft( block ) ;
     moves*left ;
     moves*right ;
  }
  moves* create()
{
    return nullptr;
}

bool isEmpty( moves* node )
{
      return node == nullptr;

}
bool find( moves*move, Block block )
{
   if ( isEmpty(move))
   return false ;
   else if ((block == move -> up)||  (block == move -> down)||  (block == move -> right) ||  (block == move -> left))
   return true ;
   else if ((block < tree -> up)|| (block < tree -> down)|| (block < tree -> right)|| (block < tree -> left))
    return find (move-> left , block ) ;
    else return find (move -> right , block ) ;
}

void Insert(moves*move, Block block)
{  
    if(isEmpty(move))
    {   
        move = new moves{ block , nullptr , nullptr } ;
    }
   else if  ((block < tree -> up)|| (block < tree -> down)|| (block < tree -> right)|| (block < tree -> left))
    {
       insert (move -> left , block);
       }
  else insert ( move -> right , block ) ;
  }

 void Insert( moves*move,Block block )
{
    if (!find(move, block))
       insert(move, block);
}
}  


