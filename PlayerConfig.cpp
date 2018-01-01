
#include "PlayerConfig.hpp"



    
    PlayerConfig::PlayerConfig(std::string filePath) : FileControl(filePath)
    {
        std::cout << "PlayerConfig created" << std::endl ;
        readFile();
    }
    
        
    PlayerConfig::~PlayerConfig()
    {
 
	       
	   
        
    }
    
   void PlayerConfig::readFile(){
        std::string step ; 
         std::ifstream file (filePath); 
         if(!file.is_open()){
             std::cout << "ERROR : Can't open the file: " << filePath << std::endl ;
         }
         
          getline(file,step,'\n');
         std::cout << step <<  std::endl ; 
         
         getline(file,step,',');
         std::cout << step <<  std::endl ; 
         
          getline(file,step,',');
         std::cout << step <<  std::endl ; 
         
          getline(file,step,',');
         std::cout << step << std::endl ; 
         
          getline(file,step,',');
         std::cout << step << std::endl ;
         
         getline(file,step,',');
         std::cout << step << std::endl ; 
         
         getline(file,step,',');
         std::cout << step << std::endl ; 
         
         file.close();
	   
    }
    
     
   /* readFile()
    {
                std::string step ; 
         std::ifstream file (path); 
         if(!file.is_open()){
             std::cout << "ERROR : Can't open the file" << path << endl ;
         }
	   
	     for (int i = 0; i < count && file.good(); i++) {
	        do{
	            getline(file,step,',');
	            Point stepPoint =  makeStringAsPoint (step) ; 
	            solidersSteps[i].push(stepPoint);
	            
	       }while();
	     }
        
    }
    */
   
   /* Point PlayerConfig::getNextStep(int soliderIndex)
    {
        return Point ();
    }*/
    
    
    int main (){
        PlayerConfig p("player1_file_example.csv");
        return 0 ; 
    }
    
    
    

