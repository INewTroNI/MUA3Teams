#include "a.hpp"

std::ostream& operator<<(std::ostream& cout, character c)
{
	using ch = character;
	switch(c)
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

std::ostream& operator<<(std::ostream& cout, bonusTeam t)
{
	using bt = bonusTeam;
	
	switch(t)
	{
		case bt::NewAvengers:
		{
			cout << "New Avengers";
			break;
		}
		case bt::GuardiansOfTheGalaxy:
		{
			cout << "Guardians Of The Galaxy";
			break;
		}
		case bt::FemmeFatalis:
		{
			cout << "Femme Fatalis";
			break;
		}
		case bt::AgentsOfSHIELD:
		{
			cout << "Agents Of S.H.I.E.L.D.";
			break;
		}
		case bt::X_Men:
		{
			cout << "X-Men";
			break;
		}
		case bt::Villians:
		{
			cout << "Villians";
			break;
		}
		case bt::Defenders:
		{
			cout << "Defenders";
			break;
		}
		case bt::Anti_Heroes:
		{
			cout << "Anti-Heroes";
			break;
		}
		case bt::OriginalAvengers:
		{
			cout << "Original Avengers";
			break;
		}
		case bt::MidnightSons:
		{
			cout << "Midnight Sons";
			break;
		}
		case bt::WebWarriors:
		{
			cout << "Web Warriors";
			break;
		}
		case bt::TheCrew:
		{
			cout << "The Crew";
			break;
		}
		case bt::MarvelRoyalty:
		{
			cout << "Marvel Royalty";
			break;
		}
		case bt::GodsAndDeamons:
		{
			cout << "Gods&Deamons";
			break;
		}
		case bt::Generations:
		{
			cout << "Generations";
			break;
		}
		case bt::HeavyHitters:
		{
			cout << "Heavy Hitters";
			break;
		}
		case bt::AgileFighters:
		{
			cout << "Agile Fighters";
			break;
		}
		case bt::UltimateAlliance3:
		{
			cout << "Ultimate Alliance 3";
			break;
		}
		case bt::Avengers:
		{
			cout << "Avengers";
			break;
		}
		case bt::X_Force:
		{
			cout << "X-Force";
			break;
		}
		case bt::WomenOfMarvel:
		{
			cout << "Women Of Marvel";
			break;
		}
		case bt::FamilyValues:
		{
			cout << "Family Values";
			break;
		}
		case bt::Partners:
		{
			cout << "Partners";
			break;
		}
		case bt::BackInBlack:
		{
			cout << "Back In Black";
			break;
		}
		case bt::MartialArtists:
		{
			cout << "Martial Artists";
			break;
		}
		case bt::ForcesOfNature:
		{
			cout << "Forces Of Nature";
			break;
		}
		case bt::CuttingEdge:
		{
			cout << "Cutting Edge";
			break;
		}
		case bt::BigBrains:
		{
			cout << "Big Brains";
			break;
		}
		case bt::WisecrackingWarriors:
		{
			cout << "Wisecracking Warriors";
			break;
		}
		case bt::TeamLeaders:
		{
			cout << "Team Leaders";
			break;
		}
		case bt::All_NewX_Men:
		{
			cout << "All-New X-Men";
			break;
		}
		case bt::SharpShooters:
		{
			cout << "Sharp Shooters";
			break;
		}
		case bt::HeavyMetal:
		{
			cout << "Heavy Metal";
			break;
		}
		case bt::MarvelKnights:
		{
			cout << "Marvel Knights";
			break;
		}
		case bt::FirstClassX_Men:
		{
			cout << "First Class X-Men";
			break;
		}
		case bt::FantasticFour:
		{
			cout << "Fantastic Four";
			break;
		}
		case bt::FantasticFourReserveMembers:
		{
			cout << "Fantastic Four Reserve Members";
			break;
		}
		case bt::SmoothOperators:
		{
			cout << "Smooth Operators";
			break;
		}
		default:
		{
			cout << "Error Bonus Team";
			break;
		}
	}
	
	return cout;
}

std::ostream& operator<<(std::ostream& cout, bonusType t)
{
	using b_t = bonusType;
	
	switch(t)
	{
		case b_t::str:
		{
			cout << "STR";
			break;
		}
		case b_t::dur:
		{
			cout << "DUR";
			break;
		}
		case b_t::mas:
		{
			cout << "MAS";
			break;
		}
		case b_t::res:
		{
			cout << "RES";
			break;
		}
		case b_t::vit:
		{
			cout << "VIT";
			break;
		}
		case b_t::ene:
		{
			cout << "ENE";
			break;
		}
		default:
		{
			cout << "Error Bonus Type";
			break;
		}
	}
	
	return cout;
}

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
	std::cout << "\n ID: " << m_id << "\n Teams: ";
	for(auto x : m_bonus_teams)
	{
		std::cout << x << ", ";
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

auto getTeamBonuses()
{
	std::vector<TeamBonus> bnsList;
	
	using bt = bonusTeam;
	using bp = bonusPower;
	using b_t = bonusType;
	
	bnsList.push_back(TeamBonus{ bt::NewAvengers, bp::bonus2_4_7, b_t::dur });
	bnsList.push_back(TeamBonus{ bt::GuardiansOfTheGalaxy, bp::bonus2_4_8, b_t::res });
	bnsList.push_back(TeamBonus{ bt::FemmeFatalis, bp::bonus2_4_8, b_t::mas });
	bnsList.push_back(TeamBonus{ bt::AgentsOfSHIELD, bp::bonus2_4_7, b_t::vit });
	bnsList.push_back(TeamBonus{ bt::X_Men, bp::bonus2_4_7, b_t::str });
	bnsList.push_back(TeamBonus{ bt::Villians, bp::bonus2_4_8, b_t::vit });
	bnsList.push_back(TeamBonus{ bt::Defenders, bp::bonus2_4_7, b_t::dur });
	bnsList.push_back(TeamBonus{ bt::Anti_Heroes, bp::bonus2_4_6, b_t::str });
	bnsList.push_back(TeamBonus{ bt::OriginalAvengers, bp::bonus3_6_10, b_t::mas });
	bnsList.push_back(TeamBonus{ bt::MidnightSons, bp::bonus3_6_10, b_t::mas });
	bnsList.push_back(TeamBonus{ bt::WebWarriors, bp::bonus2_4_8, b_t::res });
	bnsList.push_back(TeamBonus{ bt::TheCrew, bp::bonus3_6_10, b_t::res });
	bnsList.push_back(TeamBonus{ bt::MarvelRoyalty, bp::bonus2_4_6, b_t::ene });
	bnsList.push_back(TeamBonus{ bt::GodsAndDeamons, bp::bonus2_4_8, b_t::vit });
	bnsList.push_back(TeamBonus{ bt::Generations, bp::bonus2_4_7, b_t::dur });
	bnsList.push_back(TeamBonus{ bt::HeavyHitters, bp::bonus2_4_7, b_t::str });
	bnsList.push_back(TeamBonus{ bt::AgileFighters, bp::bonus1_2_4, b_t::mas });
	bnsList.push_back(TeamBonus{ bt::UltimateAlliance3, bp::bonus1_2_4, b_t::vit });
	bnsList.push_back(TeamBonus{ bt::Avengers, bp::bonus1_2_4, b_t::ene });
	bnsList.push_back(TeamBonus{ bt::X_Force, bp::bonus2_4_8, b_t::vit });
	bnsList.push_back(TeamBonus{ bt::WomenOfMarvel, bp::bonus1_2_4, b_t::ene });
	bnsList.push_back(TeamBonus{ bt::FamilyValues, bp::bonus3_6_10, b_t::dur });
	bnsList.push_back(TeamBonus{ bt::Partners, bp::bonus2_4_7, b_t::ene });
	bnsList.push_back(TeamBonus{ bt::BackInBlack, bp::bonus3_6_10, b_t::res });
	bnsList.push_back(TeamBonus{ bt::MartialArtists, bp::bonus2_4_7, b_t::str });
	bnsList.push_back(TeamBonus{ bt::ForcesOfNature, bp::bonus3_6_10, b_t::mas });
	bnsList.push_back(TeamBonus{ bt::CuttingEdge, bp::bonus2_4_6, b_t::str });
	bnsList.push_back(TeamBonus{ bt::BigBrains, bp::bonus2_4_7, b_t::res });
	bnsList.push_back(TeamBonus{ bt::WisecrackingWarriors, bp::bonus2_4_8, b_t::ene });
	bnsList.push_back(TeamBonus{ bt::TeamLeaders, bp::bonus2_4_6, b_t::ene });
	bnsList.push_back(TeamBonus{ bt::All_NewX_Men, bp::bonus2_4_8, b_t::str });
	bnsList.push_back(TeamBonus{ bt::SharpShooters, bp::bonus2_4_8, b_t::mas });
	bnsList.push_back(TeamBonus{ bt::HeavyMetal, bp::bonus2_4_8, b_t::dur });
	bnsList.push_back(TeamBonus{ bt::MarvelKnights, bp::bonus2_4_7, b_t::mas });
	bnsList.push_back(TeamBonus{ bt::FirstClassX_Men, bp::bonus3_6_10, b_t::res });
	bnsList.push_back(TeamBonus{ bt::FantasticFour, bp::bonus3_6_10, b_t::dur });
	bnsList.push_back(TeamBonus{ bt::FantasticFourReserveMembers, bp::bonus2_4_7, b_t::str });
	bnsList.push_back(TeamBonus{ bt::SmoothOperators, bp::bonus3_6_10, b_t::vit });
	
	return bnsList;
}

int getBonus(bonusPower pwr, int membersN)
{
	if (membersN < 2)
	{
		return 0;
	}
	if (membersN > 4)
	{
		return 99999;
	}
	
	using bp = bonusPower;
	
	switch (pwr)
	{
		case bp::bonus1_2_4:
		{
			switch (membersN)
			{
				case 2: return 1;
				case 3: return 2;
				case 4: return 4;
			}
			break;
		}
		case bp::bonus2_4_6:
		{
			switch (membersN)
			{
				case 2: return 2;
				case 3: return 4;
				case 4: return 6;
			}
			break;
		}
		case bp::bonus2_4_7:
		{
			switch (membersN)
			{
				case 2: return 2;
				case 3: return 4;
				case 4: return 7;
			}
			break;
		}
		case bp::bonus2_4_8:
		{
			switch (membersN)
			{
				case 2: return 2;
				case 3: return 4;
				case 4: return 8;
			}
			break;
		}
		case bp::bonus3_6_10:
		{
			switch (membersN)
			{
				case 2: return 3;
				case 3: return 6;
				case 4: return 10;
			}
			break;
		}
		default:
		{
			return 99999;
		}
	}
	return 99999;
}

int main()
{
	const auto characterList{ getCharacterList() };
	const auto teamBonuses{ getTeamBonuses() };
	
	
	
	return 0;
}