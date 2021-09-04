#include "main.hpp"

int main()
{
	const auto characterList{ getCharacterList() };
	const auto teamBonuses{ getTeamBonuses() };
	for(const auto& y : teamBonuses)
	{
		const auto& x = y.second;
		std::cout << "\n Team " << x.getID() << ": \n";
		std::cout << " " << x.getType() 
		<< " " << getBonusValue(x.getPower(), 2)
		<< " " << getBonusValue(x.getPower(), 3) 
		<< " " << getBonusValue(x.getPower(), 4) << "\n";
	}
	
	return 0;
}