#include "a.hpp"

bool Character::isOnTeam(bonusTeam t) const
{
	for(auto x : m_bonus_teams)
	{
		if (x == t)
		{
			return true;
		}
	}
	return false;
}

void Character::print() const
{
	std::cout << "\n ID: " << static_cast<int>(m_id) << "\n Teams: ";
	for(auto x : m_bonus_teams)
	{
		std::cout << static_cast<int>(x) << ", ";
	}
	std::cout << "\n";
}

auto getCharacterList()
{
	std::vector<Character> chList;
	
	using bt = bonusTeam;
	using ch = character;
	
	Character temp;
	temp.setID(ch::BlackPanther).resetBonusTeams()
	>> bt::TheCrew >> bt::MarvelRoyalty >> bt::AgileFighters
	>> bt::Avengers >> bt::BackInBlack >> bt::CuttingEdge 
	>> bt::BigBrains >> bt::FantasticFourReserveMembers;
	chList.push_back(temp);
	
	temp.setID(ch::BlackWidow).resetBonusTeams()
	>> bt::FemmeFatalis >> bt::AgentsOfSHIELD >> bt::WebWarriors
	>> bt::AgileFighters >> bt::Avengers >> bt::WomenOfMarvel
	>> bt::Partners >> bt::BackInBlack >> bt::SharpShooters;
	chList.push_back(temp);
	
	temp.setID(ch::Blade).resetBonusTeams()
	>> bt::Anti_Heroes >> bt::MidnightSons >> bt::GodsAndDeamons
	>> bt::Avengers >> bt::BackInBlack >> bt::MartialArtists
	>> bt::CuttingEdge >> bt::SharpShooters >> bt::MarvelKnights;
	chList.push_back(temp);
	
	temp.setID(ch::Cable).resetBonusTeams()
	>> bt::X_Men >> bt::X_Force >> bt::FamilyValues
	>> bt::TeamLeaders >> bt::SharpShooters >> bt::HeavyMetal;
	chList.push_back(temp);
	
	temp.setID(ch::Colossus).resetBonusTeams()
	>> bt::X_Men >> bt::HeavyHitters >> bt::All_NewX_Men
	>> bt::HeavyMetal;
	chList.push_back(temp);
	
	return 0;
}

int main()
{
	getCharacterList();
	
	return 0;
}