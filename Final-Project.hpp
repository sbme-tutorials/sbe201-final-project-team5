#include <string>
#include <vector>
#include <iostream>
#include <fstream>

using Level = std::vector< std::string >;

struct Location
{ 
  int x ;
  int y ;

};

struct Block
{ 
 Location b1;
 Location b2;
 
};

Level levelParser( const std::string &filePath )
{
    std::ifstream f( filePath );
    std::vector< std::string > lines;
    std::string line;
    if( f )
        while( std::getline( f , line ))
            lines.push_back( line );
    else std::cout << "Failed to open file:" << filePath << std::endl;
    return lines;
}

char getLevelElement( Level level , Location loc )
{ 
   return level[loc.x][loc.y] ;

}

bool isValidElement( Level level , Location loc )
{
    return level[ loc.x ][ loc.y ] != '-';
}

Location getStartLocation( Level level ,  Location temp  )
{ 
    for(int i = 0 ; i< level.size() ; i++ )
   { 
       for (int j = 0 ; j< level.size() ; j++)
       { 
              if(level[ i ][ j ] == 'S')
              {
                  
                  temp.x = j ;
                  temp.y = i ;
                  return temp ;
              }
       }

   }
   
}

Location getTargetLocation( Level level , Location temp)
{  
    
     for(int i = 0 ; i< level.size() ; i++ )
   { 
       for (int j = 0 ; j< level.size() ; j++)
       {
           if(level[ i ][ j ] = 'T')
           {
               temp.x = j ;
               temp.y = i ;
               return temp ;
           }
       }

   }
}

bool isStanding( Block block )
{  
    return ((block.b1.x == block.b2.x)&&(block.b1.y == block.b2.y));

}
 

Block moveUp( Block block )
{   
    if( isStanding( block ))
    {  Block temp ;
       temp.b1.x = block.b1.x ;
       temp.b1.y = block.b1.y+1 ;
       return temp ;
    }
    else 
    {  
        Block temp ;
       temp.b1.x = block.b1.x ;
       temp.b1.y = block.b1.y+1 ;
        temp.b2.x = block.b2.x+1 ;
       temp.b2.y = block.b2.y+2 ;
       return temp ;
    }
    
}

Block moveDown( Block block )
{
     if( isStanding( block ))
    {  Block temp ;
       temp.b1.x = block.b1.x ;
       temp.b1.y = block.b1.y-1 ;
       return temp ;
    }
    else 
    {  
        Block temp ;
       temp.b1.x = block.b1.x ;
       temp.b1.y = block.b1.y-1 ;
        temp.b2.x = block.b2.x-1 ;
       temp.b2.y = block.b2.y-2 ;
       return temp ;
    }
}

Block moveLeft( Block block )
{
   if( isStanding( block ))
    {  Block temp ;
       temp.b1.x = block.b1.x-1 ;
       temp.b1.y = block.b1.y;
       return temp ;
    }
    else 
    {  
        Block temp ;
       temp.b1.x = block.b1.x-1 ;
       temp.b1.y = block.b1.y ;
        temp.b2.x = block.b2.x-2 ;
       temp.b2.y = block.b2.y-1 ;
       return temp ;
    }
}

Block moveRight( Block block )
{
    
   if( isStanding( block ))
    {  Block temp ;
       temp.b1.x = block.b1.x ;
       temp.b1.y = block.b1.y+1 ;
       return temp ;
    }
    else 
    {  
        Block temp ;
       temp.b1.x = block.b1.x ;
       temp.b1.y = block.b1.y+1 ;
        temp.b2.x = block.b2.x+1 ;
       temp.b2.y = block.b2.y+2 ;
       return temp ;
    }
}
