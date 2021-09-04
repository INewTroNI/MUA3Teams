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

std::ostream& operator<<(std::ostream& cout, character c)
{
	using ch = character;
	switch (c)
	{
		case ch::BlackPanther:
		{
			cout << "Black Panther";
			break;
		}
		case ch::BlackWidow:
		{
			cout << "Black Widow";
			break;
		}
		case ch::Blade:
		{
			cout << "Blade";
			break;
		}
		case ch::Cable:
		{
			cout << "Cable";
			break;
		}
		case ch::Colossus:
		{
			cout << "Colossus";
			break;
		}
		case ch::CptAmerica:
		{
			cout << "Cpt. America";
			break;
		}
		case ch::CptMarvel:
		{
			cout << "Cpt. Marvel";
			break;
		}
		case ch::Crystal:
		{
			cout << "Crystal";
			break;
		}
		case ch::Cyclops:
		{
			cout << "Cyclops";
			break;
		}
		case ch::Daredevil:
		{
			cout << "Daredevil";
			break;
		}
		case ch::Deadpool:
		{
			cout << "Deadpool";
			break;
		}
		case ch::DrDoom:
		{
			cout << "Dr. Doom";
			break;
		}
		case ch::DrStrange:
		{
			cout << "Dr. Strange";
			break;
		}
		case ch::Drax:
		{
			cout << "Drax";
			break;
		}
		case ch::Elektra:
		{
			cout << "Elektra";
			break;
		}
		case ch::ElsaBloodstone:
		{
			cout << "Elsa Bloodstone";
			break;
		}
		case ch::Falcon:
		{
			cout << "Falcon";
			break;
		}
		case ch::Gambit:
		{
			cout << "Gambit";
			break;
		}
		case ch::Gamora:
		{
			cout << "Gamora";
			break;
		}
		case ch::GhostRider:
		{
			cout << "Ghost Rider";
			break;
		}
		case ch::Hawkeye:
		{
			cout << "Hawkeye";
			break;
		}
		case ch::Hulk:
		{
			cout << "Hulk";
			break;
		}
		case ch::HumanTorch:
		{
			cout << "Human Torch";
			break;
		}
		case ch::Iceman:
		{
			cout << "Iceman";
			break;
		}
		case ch::InvisibleWoman:
		{
			cout << "Invisible Woman";
			break;
		}
		case ch::IronFist:
		{
			cout << "Iron Fist";
			break;
		}
		case ch::IronMan:
		{
			cout << "Iron Man";
			break;
		}
		case ch::Loki:
		{
			cout << "Loki";
			break;
		}
		case ch::LukeCage:
		{
			cout << "Luke Cage";
			break;
		}
		case ch::Magneto:
		{
			cout << "Magneto";
			break;
		}
		case ch::MilesMorales:
		{
			cout << "Miles Morales";
			break;
		}
		case ch::MoonKnight:
		{
			cout << "Moon Knight";
			break;
		}
		case ch::Morbius:
		{
			cout << "Morbius";
			break;
		}
		case ch::MrFantastic:
		{
			cout << "Mr. Fantastic";
			break;
		}
		case ch::MsMarvel:
		{
			cout << "Ms. Marvel";
			break;
		}
		case ch::Nightcrawler:
		{
			cout << "Nightcrawler";
			break;
		}
		case ch::Phoenix:
		{
			cout << "Phoenix";
			break;
		}
		case ch::Psylocke:
		{
			cout << "Psylocke";
			break;
		}
		case ch::Punisher:
		{
			cout << "Punisher";
			break;
		}
		case ch::RocketAndGroot:
		{
			cout << "Rocket&Groot";
			break;
		}
		case ch::ScarletWitch:
		{
			cout << "Scarlet Witch";
			break;
		}
		case ch::Spider_Gwen:
		{
			cout << "Spider-Gwen";
			break;
		}
		case ch::Spider_Man:
		{
			cout << "Spider-Man";
			break;
		}
		case ch::Star_Lord:
		{
			cout << "Star-Lord";
			break;
		}
		case ch::Storm:
		{
			cout << "Storm";
			break;
		}
		case ch::Thanos:
		{
			cout << "Thanos";
			break;
		}
		case ch::TheThing:
		{
			cout << "The Thing";
			break;
		}
		case ch::Thor:
		{
			cout << "Thor";
			break;
		}
		case ch::Venom:
		{
			cout << "Venom";
			break;
		}
		case ch::Wasp:
		{
			cout << "Wasp";
			break;
		}
		case ch::Wolverine:
		{
			cout << "Wolverine";
			break;
		}
		default:
		{
			cout << "Error Character";
			break;
		}
	}
	return cout;
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
	
	temp.setID(ch::CptAmerica).resetBonusTeams()
	>> bt::AgentsOfSHIELD >> bt::Generations >> bt::Avengers 
	>> bt::Partners >> bt::TeamLeaders;
	chList.push_back(temp);
	
	temp.setID(ch::CptMarvel).resetBonusTeams()
	>> bt::GuardiansOfTheGalaxy >> bt::Generations >> bt::Avengers 
	>> bt::WomenOfMarvel >> bt::TeamLeaders;
	chList.push_back(temp);
	
	temp.setID(ch::Crystal).resetBonusTeams()
	>> bt::MarvelRoyalty >> bt::UltimateAlliance3 >> bt::Avengers 
	>> bt::WomenOfMarvel >> bt::ForcesOfNature 
	>> bt::FantasticFourReserveMembers;
	chList.push_back(temp);
	
	temp.setID(ch::Cyclops).resetBonusTeams()
	>> bt::X_Men >> bt::FamilyValues >> bt::TeamLeaders 
	>> bt::All_NewX_Men >> bt::SharpShooters >> bt::FirstClassX_Men;
	chList.push_back(temp);
	
	temp.setID(ch::Daredevil).resetBonusTeams()
	>> bt::NewAvengers >> bt::Defenders >> bt::AgileFighters 
	>> bt::MartialArtists >> bt::TeamLeaders >> bt::MarvelKnights;
	chList.push_back(temp);
	
	temp.setID(ch::Deadpool).resetBonusTeams()
	>> bt::X_Men >> bt::Villians >> bt::Anti_Heroes 
	>> bt::X_Force >> bt::CuttingEdge >> bt::WisecrackingWarriors;
	chList.push_back(temp);
	
	temp.setID(ch::DrDoom).resetBonusTeams()
	>> bt::Villians >> bt::MarvelRoyalty >> bt::BigBrains;
	chList.push_back(temp);
	
	temp.setID(ch::DrStrange).resetBonusTeams()
	>> bt::NewAvengers >> bt::Defenders >> bt::MidnightSons 
	>> bt::BigBrains >> bt::TeamLeaders;
	chList.push_back(temp);
	
	temp.setID(ch::Drax).resetBonusTeams()
	>> bt::GuardiansOfTheGalaxy >> bt::HeavyHitters 
	>> bt::UltimateAlliance3 >> bt::CuttingEdge;
	chList.push_back(temp);
	
	temp.setID(ch::Elektra).resetBonusTeams()
	>> bt::FemmeFatalis >> bt::AgentsOfSHIELD >> bt::Defenders 
	>> bt::Anti_Heroes >> bt::AgileFighters >> bt::WomenOfMarvel 
	>> bt::MartialArtists >> bt::CuttingEdge >> bt::MarvelKnights;
	chList.push_back(temp);
	
	temp.setID(ch::ElsaBloodstone).resetBonusTeams()
	>> bt::FemmeFatalis >> bt::Anti_Heroes >> bt::MidnightSons 
	>> bt::UltimateAlliance3 >> bt::WomenOfMarvel 
	>> bt::WisecrackingWarriors >> bt::SharpShooters;
	chList.push_back(temp);
	
	temp.setID(ch::Falcon).resetBonusTeams()
	>> bt::TheCrew >> bt::Generations >> bt::UltimateAlliance3 
	>> bt::Avengers >> bt::Partners;
	chList.push_back(temp);
	
	temp.setID(ch::Gambit).resetBonusTeams()
	>> bt::X_Men >> bt::AgileFighters >> bt::MartialArtists 
	>> bt::SmoothOperators;
	chList.push_back(temp);
	
	temp.setID(ch::Gamora).resetBonusTeams()
	>> bt::GuardiansOfTheGalaxy >> bt::FemmeFatalis 
	>> bt::AgileFighters >> bt::UltimateAlliance3 >> bt::WomenOfMarvel 
	>> bt::FamilyValues >> bt::MartialArtists >> bt::CuttingEdge;
	chList.push_back(temp);
	
	temp.setID(ch::GhostRider).resetBonusTeams()
	>> bt::Anti_Heroes >> bt::MidnightSons >> bt::GodsAndDeamons 
	>> bt::BackInBlack >> bt::FantasticFourReserveMembers;
	chList.push_back(temp);
	
	temp.setID(ch::Hawkeye).resetBonusTeams()
	>> bt::AgentsOfSHIELD >> bt::Defenders >> bt::AgileFighters 
	>> bt::Avengers >> bt::Partners >> bt::SharpShooters;
	chList.push_back(temp);
	
	temp.setID(ch::Hulk).resetBonusTeams()
	>> bt::OriginalAvengers >> bt::HeavyHitters >> bt::Avengers 
	>> bt::BigBrains >> bt::FantasticFourReserveMembers;
	chList.push_back(temp);
	
	temp.setID(ch::HumanTorch).resetBonusTeams()
	>> bt::FamilyValues >> bt::ForcesOfNature 
	>> bt::WisecrackingWarriors >> bt::FantasticFour 
	>> bt::SmoothOperators;
	chList.push_back(temp);
	
	temp.setID(ch::Iceman).resetBonusTeams()
	>> bt::X_Men >> bt::ForcesOfNature >> bt::WisecrackingWarriors 
	>> bt::FirstClassX_Men;
	chList.push_back(temp);
	
	temp.setID(ch::InvisibleWoman).resetBonusTeams()
	>> bt::WomenOfMarvel >> bt::FamilyValues >> bt::FantasticFour;
	chList.push_back(temp);
	
	temp.setID(ch::IronFist).resetBonusTeams()
	>> bt::NewAvengers >> bt::Defenders >> bt::MidnightSons 
	>> bt::AgileFighters >> bt::MartialArtists;
	chList.push_back(temp);
	
	temp.setID(ch::IronMan).resetBonusTeams()
	>> bt::AgentsOfSHIELD >> bt::OriginalAvengers >> bt::Avengers 
	>> bt::BigBrains >> bt::TeamLeaders >> bt::HeavyMetal 
	>> bt::SmoothOperators;
	chList.push_back(temp);
	
	temp.setID(ch::Loki).resetBonusTeams()
	>> bt::Villians >> bt::MarvelRoyalty >> bt::GodsAndDeamons 
	>> bt::FamilyValues;
	chList.push_back(temp);
	
	temp.setID(ch::LukeCage).resetBonusTeams()
	>> bt::NewAvengers >> bt::Defenders >> bt::TheCrew 
	>> bt::HeavyHitters >> bt::FantasticFourReserveMembers;
	chList.push_back(temp);
	
	temp.setID(ch::Magneto).resetBonusTeams()
	>> bt::X_Men >> bt::Villians >> bt::Anti_Heroes 
	>> bt::ForcesOfNature >> bt::HeavyMetal >> bt::FirstClassX_Men;
	chList.push_back(temp);
	
	temp.setID(ch::MilesMorales).resetBonusTeams()
	>> bt::WebWarriors >> bt::Generations >> bt::AgileFighters 
	>> bt::UltimateAlliance3;
	chList.push_back(temp);
	
	temp.setID(ch::MoonKnight).resetBonusTeams()
	>> bt::Anti_Heroes >> bt::MidnightSons >> bt::MarvelKnights;
	chList.push_back(temp);
	
	temp.setID(ch::Morbius).resetBonusTeams()
	>> bt::MidnightSons >> bt::GodsAndDeamons >> bt::UltimateAlliance3 
	>> bt::BackInBlack >> bt::BigBrains >> bt::MarvelKnights;
	chList.push_back(temp);
	
	temp.setID(ch::MrFantastic).resetBonusTeams()
	>> bt::FamilyValues >> bt::BigBrains >> bt::TeamLeaders 
	>> bt::FantasticFour;
	chList.push_back(temp);
	
	temp.setID(ch::MsMarvel).resetBonusTeams()
	>> bt::Generations >> bt::HeavyHitters >> bt::WomenOfMarvel 
	>> bt::BigBrains;
	chList.push_back(temp);
	
	temp.setID(ch::Nightcrawler).resetBonusTeams()
	>> bt::X_Men >> bt::AgileFighters >> bt::X_Force 
	>> bt::CuttingEdge >> bt::All_NewX_Men;
	chList.push_back(temp);
	
	temp.setID(ch::Phoenix).resetBonusTeams()
	>> bt::FemmeFatalis >> bt::X_Men >> bt::WomenOfMarvel 
	>> bt::FamilyValues >> bt::ForcesOfNature >> bt::FirstClassX_Men;
	chList.push_back(temp);
	
	temp.setID(ch::Psylocke).resetBonusTeams()
	>> bt::FemmeFatalis >> bt::X_Men >> bt::X_Force 
	>> bt::WomenOfMarvel >> bt::MartialArtists >> bt::CuttingEdge;
	chList.push_back(temp);
	
	temp.setID(ch::Punisher).resetBonusTeams()
	>> bt::Defenders >> bt::Anti_Heroes >> bt::BackInBlack 
	>> bt::SharpShooters >> bt::MarvelKnights;
	chList.push_back(temp);
	
	temp.setID(ch::RocketAndGroot).resetBonusTeams()
	>> bt::GuardiansOfTheGalaxy >> bt::MarvelRoyalty 
	>> bt::UltimateAlliance3 >> bt::Partners 
	>> bt::WisecrackingWarriors;
	chList.push_back(temp);
	
	temp.setID(ch::ScarletWitch).resetBonusTeams()
	>> bt::MidnightSons >> bt::UltimateAlliance3 >> bt::Avengers 
	>> bt::WomenOfMarvel;
	chList.push_back(temp);
	
	temp.setID(ch::Spider_Gwen).resetBonusTeams()
	>> bt::WebWarriors >> bt::AgileFighters >> bt::UltimateAlliance3 
	>> bt::WomenOfMarvel;
	chList.push_back(temp);
	
	temp.setID(ch::Spider_Man).resetBonusTeams()
	>> bt::NewAvengers >> bt::WebWarriors >> bt::Generations 
	>> bt::AgileFighters >> bt::BigBrains >> bt::WisecrackingWarriors 
	>> bt::FantasticFourReserveMembers;
	chList.push_back(temp);
	
	temp.setID(ch::Star_Lord).resetBonusTeams()
	>> bt::GuardiansOfTheGalaxy >> bt::MarvelRoyalty 
	>> bt::UltimateAlliance3 >> bt::ForcesOfNature 
	>> bt::WisecrackingWarriors >> bt::TeamLeaders >> bt::SmoothOperators;
	chList.push_back(temp);
	
	temp.setID(ch::Storm).resetBonusTeams()
	>> bt::X_Men >> bt::TheCrew >> bt::MarvelRoyalty 
	>> bt::GodsAndDeamons >> bt::X_Force >> bt::WomenOfMarvel 
	>> bt::ForcesOfNature >> bt::All_NewX_Men 
	>> bt::FantasticFourReserveMembers;
	chList.push_back(temp);
	
	temp.setID(ch::Thanos).resetBonusTeams()
	>> bt::Villians >> bt::GodsAndDeamons >> bt::UltimateAlliance3 
	>> bt::FamilyValues >> bt::TeamLeaders;
	chList.push_back(temp);
	
	temp.setID(ch::TheThing).resetBonusTeams()
	>> bt::GuardiansOfTheGalaxy >> bt::HeavyHitters 
	>> bt::FantasticFour;
	chList.push_back(temp);
	
	temp.setID(ch::Thor).resetBonusTeams()
	>> bt::OriginalAvengers >> bt::MarvelRoyalty >> bt::GodsAndDeamons 
	>> bt::HeavyHitters >> bt::Avengers >> bt::FamilyValues;
	chList.push_back(temp);
	
	temp.setID(ch::Venom).resetBonusTeams()
	>> bt::Villians >> bt::Anti_Heroes >> bt::WebWarriors 
	>> bt::HeavyHitters >> bt::Partners >> bt::BackInBlack;
	chList.push_back(temp);
	
	temp.setID(ch::Wasp).resetBonusTeams()
	>> bt::OriginalAvengers >> bt::UltimateAlliance3 >> bt::Avengers 
	>> bt::WomenOfMarvel;
	chList.push_back(temp);
	
	temp.setID(ch::Wolverine).resetBonusTeams()
	>> bt::NewAvengers >> bt::AgentsOfSHIELD >> bt::X_Men 
	>> bt::Anti_Heroes >> bt::X_Force >> bt::MartialArtists 
	>> bt::CuttingEdge >> bt::All_NewX_Men >> bt::HeavyMetal 
	>> bt::FantasticFourReserveMembers;
	chList.push_back(temp);
	
	return chList;
}

int main()
{
	auto characterList{ getCharacterList() };
	for(const auto& x : characterList)
	{
		std::cout << x.getID() << " " << x.getBonusTeams().size() << "\n";
	}
	
	return 0;
}