#include <iostream>;
#include <string>; 

std::string loseAscii(int rand_num) {
	std::string you_lose = R"(
-------------------------------------------------------------------------------------------------|
---------------------------------- YOU LOSE!!! --------------------------------------------------|
-------------------------------------------------------------------------------------------------|
			      The right number was answer                                            |
-------------------------------------------------------------------------------------------------|
         
                               .*/#&@@@@@@@@@&##/,.                             
                       .#@@@&(*.                  ./#@@@&/                      
                  ,&@@#.                                  *@@@(                 
               &@@*                                            %@@*             
            &@@.                                                  /@@.          
         .@@/                                                        &@%        
        @@*                                                            &@(      
      (@%               @@@@@@@&                 *@@@@@@@(              .@@.    
     #@(               @@@@@@@@@@               *@@@@@@@@@%               @@,   
    /@#                @@@@@@@@@%                @@@@@@@@@,               .@@   
   .@@                   &@@@@%                   ,@@@@@/                  (@#  
   ,@%                                                                     ,@@  
   ,@%                   *@%                                               ,@@  
   .@@                  (@@@&                                              (@#  
    (@#                                                                   .@@.  
     %@/                                                                  @@,   
      #@%                        ,(@@@@@@@@@@&*.                        .@@.    
       .@@,                .#@@@%*            .(&@@@*                  &@#      
         ,@@*           *@@&,                       /@@&.            &@%        
            &@&.                                                  /@@*          
               &@@*                                            %@@*             
                  .&@@(                                   ,&@@#                 
                       ,%@@@&/,                   .*#@@@&(                      
                               ,/#%&@@@@@@@@@@%#(*.                             
			)";

    you_lose.replace(you_lose.find("answer"), 6, std::to_string(rand_num));

    return you_lose; 
}