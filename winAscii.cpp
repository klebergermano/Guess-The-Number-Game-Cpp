#include <iostream>

std::string winAscii() {
	std::string win = R"(
|||||||||||||||||||||||||||||||||||||||||||||||||||||
-----------------------------------------------------
--------------------YOU WIN!!!-----------------------
-----------------------------------------------------
||||| CONGRATULATIONS YOU HIT THE RIGHT NUMBER ||||||
-----------------------------------------------------
||||||||||||||||||||||||||||||||||||||||||||||||||||| 
)";
	return win; 
}