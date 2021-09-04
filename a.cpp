#include "a.hpp"




int main()
{
	const auto characterList{ getCharacterList() };
	const auto teamBonuses{ getTeamBonuses() };
	for(const auto& x : teamBonuses)
	{
		std::cout << "\n Team " << x.getID() << ": \n";
		std::cout << " " << x.getType() << " " << getBonus(x.getPower(), 2)
		<< " " << getBonus(x.getPower(), 3) << " " << getBonus(x.getPower(), 4) << "\n";
	}
	
	return 0;
}