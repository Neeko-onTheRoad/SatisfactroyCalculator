#pragma once

#ifndef _SCENE_BASE_HXX_
#define _SCENE_BASE_HXX_

#include <vector>
#include <functional>
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

namespace sfc {
	namespace Client {

//=================================================================================================| Extern Classes

		class ClientTime;


		class SceneBase : Drawable {

//=================================================================================================| Virtual Functions

			protected: virtual void Initialize();
			protected: virtual void Update();

//=================================================================================================| Functions

			public: void InitializeBase();
			public: void UpdateBase();

//=================================================================================================| Elements

			private: vector<Drawable>                   objects;
			private: vector<function<void(ClientTime)>> updates;

//=================================================================================================| Overrided Functions

			public: void Drawable::draw(RenderTarget& _target, RenderStates _states) const;



		};
		
	}
}


#endif