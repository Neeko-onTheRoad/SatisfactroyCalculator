#pragma once

#ifndef _ITEM_HXX_
#define _ITEM_HXX_

#include <SFML/Graphics.hpp>

#include <set>

using namespace sf;
using namespace std;
using namespace sfc;

namespace sfc {
	
	extern class Building; 
	extern class Recipe;


	class Item {

	private:

		string         displayName;
		vector<string> description;
		unsigned short stackSize;
		unsigned short sinkPoint;

		Sprite itemSprite;

		set<const Recipe*> recipes;
		set<const Recipe*> altRecipes;
		set<const Recipe*> usages;
		set<const Recipe*> altUsages;


	
	public:

		Item(
			string         _displayName,
			vector<string> _description,
			unsigned short _stackSize,
			unsigned short _sinkPoint,
			Sprite         _itemSprite
		);
		
		const string&         GetDisplayName();
		const vector<string>& GetDiscription();
		const unsigned short& GetStackSize();
		const unsigned short& GetSinkPoint();

		const set<const Recipe*>& GetRecipes();
		const set<const Recipe*>& GetAltRecipes();
		const set<const Recipe*>& GetAllRecipes();

		const set<const Recipe*>& GetUsages();
		const set<const Recipe*>& GetAltUsages();
		const set<const Recipe*>& GetAllUsages();


	};


}



#endif