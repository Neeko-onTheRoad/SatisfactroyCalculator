#pragma once

#ifndef _UPDATING_DRAWABLE_HXX_
#define _UPDATING_DRAWABLE_HXX_

#include <functional>
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

namespace sfc {
	namespace Client {

//=================================================================================================| Extern Classes

		class ClientTime;

		class UpdatingDrawable : Drawable {

//=================================================================================================| Status, Flags
		
			private: bool updating = true;

//=================================================================================================| Getters, Setters

			public: bool GetUpdating();
			public: void SetUpdating(bool _updating);

//=================================================================================================| Constructor

			public: UpdatingDrawable(Drawable);

//=================================================================================================| Virtual Functions

			public: virtual void Update(ClientTime _clientTime) = 0;

		};
	}
}


#endif