#include "main.hpp"

int evaluator(int str, int dur, int mas, int res, int vit, int ene)
{
	return str + dur + mas + res + vit + ene;
}

int main()
{
	const auto characterList{ getCharacterList() };
	/*
	for(const auto& y : teamBonuses)
	{
		const auto& x = y.second;
		std::cout << "\n Team " << x.getID() << ": \n";
		std::cout << " " << x.getType() 
		<< " " << getBonusValue(x.getPower(), 2)
		<< " " << getBonusValue(x.getPower(), 3) 
		<< " " << getBonusValue(x.getPower(), 4) << "\n";
	}
	*/
	
	Team test{ characterList.at(character::BlackPanther)
	, characterList.at(character::Blade)
	, characterList.at(character::CptAmerica)
	, characterList.at(character::Crystal)};
	
	std::cout << 
	
	return 0;
}