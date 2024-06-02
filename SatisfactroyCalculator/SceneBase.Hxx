#pragma once

#ifndef _SCENE_BASE_HXX_
#define _SCENE_BASE_HXX_

#include <vector>
#include <functional>
#include <SFML/Graphics.hpp>

#include "ClientTime.Hxx"

using namespace sf;
using namespace std;

namespace sfc {
	namespace Client {

		class SceneBase {

			private: vector<Drawable>                   objects;
			private: vector<function<void(ClientTime)>> updates;

			private: void InitializeBase();
			private: void UpdateBase();
			
			protected: virtual void Initialize();
			protected: virtual void Update();




		};
		
	}
}


#endif