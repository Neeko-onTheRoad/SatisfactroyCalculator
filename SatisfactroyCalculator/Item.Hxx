#pragma once

#ifndef _ITEM_HXX_
#define _ITEM_HXX_

#include <set>
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;
using namespace sfc;

namespace sfc {

//=================================================================================================| Extern Classes
	
	extern class Building; 
	extern class Recipe;


	class Item {

//=================================================================================================| Status & Flags

		private: string         displayName;
		private: vector<string> description;
		private: unsigned short stackSize;
		private: unsigned short sinkPoint;

		private: Sprite itemSprite;	

		private: set<const Recipe*> recipes;
		private: set<const Recipe*> altRecipes;
		private: set<const Recipe*> usages;
		private: set<const Recipe*> altUsages;

//=================================================================================================| Getters
		
		public: const string*         GetDisplayName();
		public: const vector<string>* GetDiscription();
		public: const unsigned short* GetStackSize();
		public: const unsigned short* GetSinkPoint();

		public: const set<const Recipe*>* GetRecipes();
		public: const set<const Recipe*>* GetAltRecipes();
		public: const set<const Recipe*>* GetAllRecipes();

		public: const set<const Recipe*>* GetUsages();
		public: const set<const Recipe*>* GetAltUsages();
		public: const set<const Recipe*>* GetAllUsages();

//=================================================================================================| Constructor

		public: Item(
			string         _displayName,
			vector<string> _description,
			unsigned short _stackSize,
			unsigned short _sinkPoint,
			Sprite         _itemSprite
		);

//=================================================================================================| Methods

		
		

	};


}



#endif