#include "ResourceManager.Hxx"

using namespace sf;
using namespace sfc;
using namespace std;



Texture Resources::Textures::Items::Ores::LimeStone;
Texture Resources::Textures::Items::Ores::IronOre;
Texture Resources::Textures::Items::Ores::CopperOre;



void Resources::Init() {

	Textures::Items::Ores::LimeStone.loadFromFile(".\\res\\Textures\\Items\\Ores\\LimeStone.png");
	Textures::Items::Ores::IronOre  .loadFromFile(".\\res\\Textures\\Items\\Ores\\IronOre.png");

}
