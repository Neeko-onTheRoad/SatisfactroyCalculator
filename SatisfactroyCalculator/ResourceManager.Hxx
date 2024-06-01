#pragma once

#ifndef _RESOURCE_MANAGER_HXX_
#define _RESOURCE_MANAGER_HXX_

#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

namespace sfc {

	static class Resources {
	public:
		static void Init();
		
		static class Textures {
		public:

			static class Items {
			public:

				static class Ores {
				public:

					static Texture LimeStone;
					static Texture IronOre;
					static Texture CopperOre;

				};
			};
		};
	};
}


#endif